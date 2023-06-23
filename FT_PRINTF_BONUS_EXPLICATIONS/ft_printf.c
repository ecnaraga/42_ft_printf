/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:51:27 by galambey          #+#    #+#             */
/*   Updated: 2023/06/18 12:33:54 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* *****************************************************************************
 * 
 * Description : si apres un % dans la string (1er parametre de printf), le
 * 				 format n'est pas respecte, print la chaine normalement jusqu'au
 * 				 "char faux pour le format"
 *				 
 * Allocation dynamique : non
 *
 * Crash : non car protege en amont
 *
 * ************************************************************************* */

static void	print_wrong_format(char *s, int i)
{
	int	j;

	j = 0;
	write(1, "%", 1);
	while (j < i)
	{
		write(1, &s[j], 1);
		if (s[j] == '.')
			write(1, "0", 1);
		j++;
	}
}

/* *****************************************************************************
 * 
 * Description : Verifie aue le parametre de printf respecte le format :
 * 				 % ET/OU (Flag ET/OU FLAG NB) ET/OU (. ET/OU PRECISION) et fait
 * 				 si le format est incorrect
 *				 
 * Allocation dynamique : non
 *
 * Crash : non car protege en amont
 *
 * Valeur de retour :
 * => Retour = 0 : Le format de l'arg apres le % est correct
 *					  
 * => Retour > 0 : Le nombre de char print sur la sortie terminal
 *
 * ************************************************************************* */

static int	ck_str(char *s, int *point)
{
	int	i;

	i = 0;
	while (ck_char("-0# +", s[i]) > 0)
		i++;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] == '.')
	{
		i += 1;
		*point += 1;
	}
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (ck_char("cpsdiuxX%", s[i]) == 0)
	{
		print_wrong_format(s, i);
		return (i + 1 + *point);
	}
	return (0);
}
/* *****************************************************************************
 * 
 * Description : Si le format de la string passe en parametre de printf est
 * 				 correct, envoie a ft_arg pour gere l'argument contenu au debut 
 * 				 de la string (s a ete envoyee apres le %), sinon a fait print
 * 				 le "wrong format", stocke le nb de char print et renvoie l'index
 * 				 d'ou il faut repartir
 *				 
 * Allocation dynamique : non si malloc, tout a ete deja free a ce point
 *
 * Crash : non car protege en amont
 *
 * Valeur de retour :
 * => Retour = -2 code erreur(alloc echouee ou flag nb ou precision > intmax)
 *					  
 * => Retour = 0 ok on continue
 *
 * ************************************************************************* */

int	found_percent(va_list ap, const char *s, int *count, int *i)
{
	int	result;
	int	j;
	int	point;

	point = 0;
	result = ck_str((char *)s + 1, &point);
	j = 0;
	if (result == 0)
	{
		j = ft_arg(ap, (char *)s, count);
		if (j == -2)
			return (j);
		*i += (j + 1);
	}
	else
	{
		*i += result - 1 - point;
		*count += result;
	}
	return (0);
}

/* *****************************************************************************
 * 
 * Description : Parcourt la string passee en parametre de printf et gere :
 * 				 1. s[i] != % -> print s[i];
 * 				 2. s[i] = % et s[i + 1] existe -> envoie a found/percent pour
 * 				 	gestion de l'arg potentiel
 * 				 3. s[i] = % et dernier char de la string -> print % et renvoie
 * 				 	code erreur printf -1
 *				 
 * Allocation dynamique : non si malloc, tout a ete deja free a ce point
 *
 * Crash : non car protege en amont
 *
 * Valeur de retour :
 * => Retour = -1 : code erreur(alloc echouee ou flag nb ou precision > intmax
 *				    ou % dernier char de la string
 *					  
 * => Retour != -1 : nb de char print sur la sortie terminal
 *
 * ************************************************************************* */

static int	ft_print_s(const char *s, va_list ap, int *count)
{
	int	i;
	int	j;

	i = -1;
	while (s[++i])
	{
		if (s[i] != '%')
			*count += ft_print_char((void *)&s[i]);
		else if (s[i + 1] && s[i] == '%')
		{
			j = found_percent(ap, s + i, count, &i);
			if (j == -2)
				return (-1);
		}
		else if (!s[i + 1] && s[i] == '%')
			*count = -1;
	}
	return (*count);
}

/* *****************************************************************************
 * FONCTION VARIADIQUE
 * Description : Cree et recupere la liste d'arguments, ap, qui se trouvent
 *				 potentiellement apres s dans les parametres de printf 
 *				 
 * Allocation dynamique : non si malloc, tout a ete deja free a ce point
 *
 * Crash : non
 *
 * Valeur de retour :
 * => Retour = -1 : code erreur(alloc echouee ou flag nb ou precision > intmax
 *				    ou % dernier char de la string
 *					  
 * => Retour != -1 : nb de char print sur la sortie terminal
 *
 * ************************************************************************* */


int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	if (!s)
		return (-1);
	va_start(ap, s);
	count = ft_print_s(s, ap, &count);
	va_end(ap);
	return (count);
}
