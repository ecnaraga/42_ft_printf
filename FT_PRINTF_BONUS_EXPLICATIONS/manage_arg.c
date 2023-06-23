/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:59:13 by garance           #+#    #+#             */
/*   Updated: 2023/06/18 13:41:22 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* *****************************************************************************
 * 
 * Description : free ce qui a ete malloc
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * Valeur de retour :
 * => Retour = -2 -> Printf devra renvoyer code erreur -1
 *					  
 * => Retour != -2 -> free ok on continue
 * 
 * ************************************************************************* */

int	ft_free_arg(t_aglist *ag, int result)
{
	if (ag->flag)
		free(ag->flag);
	if (ag)
		free(ag);
	return (result);
}

/* *****************************************************************************
 * 
 * Description : copie les flags "#0 +-" si present dans ag->flag et si un - et
 *				 0 sont presents, efface le 0 car le - prime 
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non car protegee en amont
 *
 * ************************************************************************* */

static void	ft_orgflag(char *flag, char *str, size_t size)
{
	int	i;
	int	f;

	i = -1;
	f = 0;
	ft_strlcpy(flag, str, size);
	while (flag[++i])
	{
		if (flag[i] == '-')
			f = 1;
	}
	i = -1;
	while (f == 1 && flag[++i])
	{
		if (flag[i] == '0')
			flag[i] = 'v';
	}
}

/* *****************************************************************************
 * 
 * Description : complete ag->flag avec le flag . si ce dernier est rencontre et
 * 				 renseigne la precision (relative au .) dans ag->prec
 *				 
 * Allocation dynamique : oui avant , envoie a free si precision > intmax x code
 * 						  erreur printf -1
 *
 * Crash : Non car protegee en amont
 *
 * Valeur de retour :
 * => Retour = -2 : precision > intmax, printf devra renvoyer code erreur -1
 *					  
 * => Retour = 0 : ok , on continue
 *
 * ************************************************************************* */

static int	ft_make_flag_point(t_aglist *ag, char *s, int *i)
{
	if (s[*i] == '.')
	{
		ft_strcat(ag->flag, ".");
		*i += 1;
	}
	ag->prec = ft_atoi_mode(s + *i);
	if (ag->prec == -2)
		return (ft_free_arg(ag, -2));
	if (ck_char(ag->flag, '.') > 0 && ag->prec == -1)
		ag->prec = 0;
	while (s[*i] >= '0' && s[*i] <= '9')
		*i += 1;
	return (0);
}

/* *****************************************************************************
 * 
 * Description : Complete la structure avec les elements de flags autres que
 * 				 cpsdiuxX
 *				 
 * Allocation dynamique : Oui 1 a 2x, free en cas d'echec alloc et si l'arg final
 * 						  est un %
 *
 * Crash :  Non car protegee en amont
 *
 * Valeur de retour :
 * => Retour = -2 : precision ou ag->number > intmax, ou echec alloc printf
 * 					devra renvoyer code erreur -1
 *					  
 * => Retour != -2 : ok on continue  
 *
 * ************************************************************************* */

int	ft_make_arg(t_aglist *ag, char *s, int *i)
{
	int	result;

	while (ck_char("-0# +", s[*i]) > 0)
		*i += 1;
	ag->flag = ft_calloc(*i + 2, sizeof(char));
	if (ag->flag == NULL)
		return (ft_free_arg(ag, -2));
	ft_orgflag(ag->flag, s, *i + 1);
	ag->nb = ft_atoi_mode(s + *i);
	while (s[*i] >= '0' && s[*i] <= '9')
		*i += 1;
	if (ag->nb == -2)
		return (ft_free_arg(ag, -2));
	result = ft_make_flag_point(ag, s, i);
	if (result == -2)
		return (-2);
	if (s[*i] == '%')
		return (ft_free_arg(ag, *i));
	return (*i);
}
