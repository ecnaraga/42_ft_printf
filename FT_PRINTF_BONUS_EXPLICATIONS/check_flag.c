/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:23:14 by garance           #+#    #+#             */
/*   Updated: 2023/06/18 14:25:17 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* *****************************************************************************
 * 
 * Description : Gere les flags "# +" et compte le nb de 0 qui devront etre
 * 				 imprime pour la precision
 * 				 1. # imprime 0x ou 0X pour les conversions en base 16(%x ou %X)
 * 				 2. " " et + mettent respectivement un " " ou un + devant les
 * 				   int >= 0 (pas unsigned) et les pointeurs non null (%d %i %p)
 * 				 3. Si " " et +, le plus ecrase l'espace
 *				 
 * Allocation dynamique : non
 *
 * Crash : non car protegee en amont
 *
 * ************************************************************************* */

void	ft_flag_plus_space_diese(t_aglist *ag, int id, int *zero)
{
	if (ck_char(ag->flag, '#') > 0 && *(int *)&ag->content != 0
		&& (id == 4 || id == 3))
	{
		if (id == 4)
			write (1, "0x", 2);
		if (id == 3)
			write (1, "0X", 2);
		if (ag->prec >= ag->len)
			*zero += 2;
		else if (ag->prec > 0 && ag->prec == ag->len - 1)
		{
			*zero += 1;
			ag->prec += 1;
		}
	}
	else if ((id == 2 || (id == 5 && ag->content))
		&& ck_sset(ag->flag, "+ ") > -1)
	{
		if (ck_char(ag->flag, '+') > 0)
			write(1, "+", 1);
		else if (ck_char(ag->flag, ' ') > 0)
			write(1, " ", 1);
		if (ag->prec >= ag->len)
			*zero += 1;
	}
}
/* *****************************************************************************
 * 
 * Description : Si le content est un int neg print - et augmente de 1 le nombre
 * 				 de zero qui devra etre imprime si precision >= ag->len, car la
 * 				 precision ne prend pas en compte le signe
 *				 
 * Allocation dynamique : non
 *
 * Crash : non car protegee en amont
 *
 * ************************************************************************* */

void	print_minus(t_aglist *ag, int *zero)
{
	write(1, "-", 1);
	if (ag->prec >= ag->len)
		*zero += 1;
}

/* *****************************************************************************
 * 
 * Description : Print le nb d'espace qui doit etre imprime avant le nb 
 * 				 par ag->nb si "-0." absent des flags OU si . mais avec une
 * 				 precision > 0 et < ag->number : ce sont les flags -0. qui
 * 				 priment
 *				 
 * Allocation dynamique : non
 *
 * Crash : non car protegee en amont
 *
 * ************************************************************************* */

void	print_front_space(t_aglist *ag, unsigned int *count, int *zero, int id)
{
	unsigned int	tmp;

	tmp = *count;
	while (tmp++ < ag->prec)
			*zero += 1;
	if (ck_char(ag->flag, '-') == 0 && (ck_sset(ag->flag, "0.") == -1
			|| (ag->prec < ag->nb && ag->prec > -1)))
	{
		if (ck_char(ag->flag, '#') > 0 && *(int *)&ag->content != 0
			&& (id == 4 || id == 3) && ag->prec > 0)
		{
			if (ag->prec >= ag->len)
				tmp += 2;
			else if (ag->prec == ag->len - 1)
				tmp += 1;
		}
		if (ag->prec >= ag->len && (((id == 2 || (id == 5 && ag->content))
					&& ck_sset(ag->flag, "+ ") > -1) || id == 0))
			tmp += 1;
		while (tmp++ <= ag->nb)
			*count += write(1, " ", 1);
	}
}
/* *****************************************************************************
 * 
 * Description : Gere les flags "# +0." et le ag->nb qui impriment des char
 * 				 avant l'argument.
 * 				 Si le flag - est present tous les espaces imprimes GRACE au
 * 				 ag->nb seront imprimes APRES l'argument donc pas ici.
 * 				 le flag - prime sur le 0 mais deja gere dans orgflag.
 * 				 
 * 				 Le flag 0 imprime des 0 avant les int, u int, conv en base 16,
 * 				 pointeur non null si ag->len < ag-nb, si flag 0 absent, ce sont
 * 				 espaces (%d %i %u %x %X %p)
 * 
 * 				 Si ag->nb > ag->len et pas de - , imprime des " " devant les char
 * 				 string et pointeur null (%c %s %p)
 *				 
 * Allocation dynamique : non
 *
 * Crash : non car protegee en amont
 *
 * Valeur de retour :
 * => Retour = nb de char print grace aux flags + len de l'argument
 *					  
 * ************************************************************************* */

int	ck_front_flag(t_aglist *ag, unsigned int count, int id)
{
	int	zero;

	zero = 0;
	if ((id >= 0 && id <= 4) || (id == 5 && ag->content))
	{
		print_front_space(ag, &count, &zero, id);
		ft_flag_plus_space_diese(ag, id, &zero);
		if (id == 0)
			print_minus(ag, &zero);
		if (id == 5)
			write(1, "0x", 2);
		while ((count < ag->nb && ck_char(ag->flag, '0') > 0 && ag->prec == -1)
			|| (zero-- > 0 && (ag->prec >= ag->len)))
			count += write(1, "0", 1);
	}
	else if (ck_char(ag->flag, '-') == 0)
	{
		while (count < ag->nb)
			count += write(1, " ", 1);
	}
	return (count);
}
/* *****************************************************************************
 * 
 * Description : Gere le flags "-" et le ag->nb qui ensemble impriment des char
 * 				 apres l'argument.
 * 				 Imprime des espaces apres l'argument jusqu'a ce que le nb de
 * 				 imprimes soient egal au ag->nb
 * 				 
 * Allocation dynamique : non
 *
 * Crash : non car protegee en amont
 *
 * Valeur de retour :
 * => Retour = nb de char print au total pour l'argument
 *					  
 * ************************************************************************* */

int	ck_back_flag(t_aglist *ag, int count)
{
	if (ag->flag || ag->nb > -1)
	{
		if (count < ag->nb && ck_char(ag->flag, '-') > 0)
		{
			while (count < ag->nb)
				count += write(1, " ", 1);
		}
	}
	return (count);
}
