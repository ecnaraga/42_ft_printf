/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lowhexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:09:56 by galambey          #+#    #+#             */
/*   Updated: 2023/06/18 11:51:15 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* *****************************************************************************
 * 
 * Description : Convertbase16 en recursive qui renvoie le nombre de char print,
 * 				 ne s'occupe pas de print le - si int neg
 *				 
 * Allocation dynamique : non
 *
 * Crash : non car protegee en amont
 *
 * Valeur de retour :
 * => Retour =  nb de char ecrit sur la sortie terminal
 *					  
 * ************************************************************************* */

static int	ft_print_lowhexa(void *n)
{
	unsigned int	nb;
	int				count;
	char			*base;
	unsigned int	tmp;

	nb = *(unsigned int *)n;
	base = "0123456789abcdef";
	if (nb < 16)
		return (ft_print_char(&base[nb]));
	else
	{
		tmp = nb / 16;
		count = ft_print_lowhexa(&tmp);
		return (count + ft_print_char(&base[nb % 16]));
	}
}

/* *****************************************************************************
 * id = 4
 * Description : Attribue un int pour identifier le type dans les fonctions
 * 				 ck_front_flag et ck_back_flag, appelle les fonctions qui gerent
 * 				 les flags et qui print l'int en base 16, renvoie le nb de char
 * 				 ecrit
 *				 
 * Allocation dynamique : non
 *
 * Crash : non, car protegee en amont si ag n'existe pas
 *
 * Valeur de retour :
 * => Retour =  nb de char ecrit sur la sortie terminal
 *					  
 * ************************************************************************* */

int	print_lowhexa(t_aglist *ag)
{
	int				count;
	int				id;
	unsigned int	n;

	count = 1;
	id = 4;
	n = *(int *)&ag->content;
	digit_len(&n, &count, 16);
	if (n > 0 && ck_char(ag->flag, '#') > 0)
		count += 2;
	ag->len = count;
	if (n == 0 && ck_char(ag->flag, '.') > 0 && ag->prec == 0)
		count = 0;
	count = ck_front_flag(ag, count, id);
	if (!(n == 0 && ck_char(ag->flag, '.') > 0 && ag->prec == 0))
		ft_print_lowhexa(&ag->content);
	count = ck_back_flag(ag, count);
	return (count);
}
