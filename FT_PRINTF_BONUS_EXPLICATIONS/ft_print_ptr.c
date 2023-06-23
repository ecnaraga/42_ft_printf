/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:54:47 by galambey          #+#    #+#             */
/*   Updated: 2023/06/18 11:56:50 by garance          ###   ########.fr       */
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

static int	print_longlowhexa(long unsigned int n, t_aglist *ag, int y)
{
	long unsigned int	nb;
	int					x;
	char				*base;

	nb = n;
	base = "0123456789abcdef";
	(void) y;
	if (nb < 16)
		return (ft_print_char(&base[nb]));
	else
	{
		x = print_longlowhexa(nb / 16, ag, 0);
		ft_print_char(&base[nb % 16]);
		return (x + 1);
	}
}

/* *****************************************************************************
 * 
 * Description : strlen pour int decimal lorsqu'il sera converti dans la base
 *				 envoyee
 *				 
 * Allocation dynamique : non
 *
 * Crash : non
 *
 * Valeur de retour :
 * => Retour =  nb de digit de l'int(base 10) passe dans la base  en parametre
 *					  
 * ************************************************************************* */

static void	ptr_len(uintptr_t n, int *count, unsigned int base)
{
	while (n >= base)
	{
		*count += 1;
		n = n / base;
	}
}

/* *****************************************************************************
 * id = 5
 * Description : Attribue un int pour identifier le type dans les fonctions
 * 				 ck_front_flag et ck_back_flag, appelle les fonctions qui gerent
 * 				 les flags et qui print l'adresse du pointeur (uintptr_t) en base
 * 				 16, renvoie le nb de char ecrit
 *				 
 * Allocation dynamique : non
 *
 * Crash : non, car protegee en amont si ag n'existe pas
 *
 * Valeur de retour :
 * => Retour =  nb de char ecrit sur la sortie terminal
 *					  
 * ************************************************************************* */

int	print_ptr(t_aglist *ag)
{
	int			count;
	int			id;
	uintptr_t	n;

	count = 3;
	id = 5;
	n = (uintptr_t)ag->content;
	if (n != 0)
		ptr_len(n, &count, 16);
	if (n == 0)
		count = 5;
	if (ck_sset(ag->flag, "+ ") > -1 && ag->content)
		count += 1;
	ag->len = count;
	if (ck_char(ag->flag, '.') > 0)
		ag->prec += 2;
	count = ck_front_flag(ag, count, id);
	if (n != 0)
		print_longlowhexa((uintptr_t)ag->content, ag, 1);
	else
		write(1, "(nil)", 5);
	count = ck_back_flag(ag, count);
	return (count);
}
