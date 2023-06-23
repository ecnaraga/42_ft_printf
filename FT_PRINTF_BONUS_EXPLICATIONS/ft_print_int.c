/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:31:34 by galambey          #+#    #+#             */
/*   Updated: 2023/06/18 11:49:14 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* *****************************************************************************
 * 
 * Description : Putnbr en recursive qui renvoie le nombre de char print, ne
 * 				 s'occupe pas de print le - si int neg
 *				 
 * Allocation dynamique : non
 *
 * Crash : non car protegee en amont
 *
 * Valeur de retour :
 * => Retour =  nb de char ecrit sur la sortie terminal
 *					  
 * ************************************************************************* */

static int	ft_print_int(void *n, t_aglist *ag)
{
	unsigned int	nb;
	int				count;
	unsigned int	tmp;

	nb = *(int *)n;
	count = 0;
	if (*(int *)n < 0)
		nb = -*(int *)n;
	if (nb < 10)
	{
		tmp = nb + 48;
		return (ft_print_char(&tmp) + count);
	}
	else
	{
		tmp = (nb / 10);
		count += ft_print_int(&tmp, ag);
		tmp = (nb % 10) + 48;
		return (ft_print_char(&tmp) + count);
	}
}

/* *****************************************************************************
 * id = 2 si int >= 0 // id = 0 si int < 0
 * Description : Attribue un int pour identifier le type dans les fonctions
 * 				 ck_front_flag et ck_back_flag, appelle les fonctions qui gerent
 * 				 les flags et qui print l'int, renvoie le nb de char ecrit
 *				 
 * Allocation dynamique : non
 *
 * Crash : non, car protegee en amont si ag n'existe pas
 *
 * Valeur de retour :
 * => Retour =  nb de char ecrit sur la sortie terminal
 *					  
 * ************************************************************************* */

int	print_int(t_aglist *ag)
{
	int				count;
	unsigned int	n;
	int				id;

	n = *(int *)(&ag->content);
	ag->len = 0;
	id = 2;
	count = 1;
	if (*(int *)(&ag->content) < 0)
	{
		n = -(*(int *)(&ag->content));
		id = 0;
	}
	digit_len(&n, &count, 10);
	if (n == 0 && ck_char(ag->flag, '.') > 0 && ag->prec == 0)
		count = 0;
	if (ck_sset(ag->flag, "+ ") > -1 || id == 0)
		count += 1;
	ag->len += count;
	count = ck_front_flag(ag, count, id);
	if (!(n == 0 && ck_char(ag->flag, '.') > 0 && ag->prec == 0))
		ft_print_int(&ag->content, ag);
	count = ck_back_flag(ag, count);
	return (count);
}
