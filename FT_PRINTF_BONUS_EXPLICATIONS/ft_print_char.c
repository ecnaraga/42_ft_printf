/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:53:34 by galambey          #+#    #+#             */
/*   Updated: 2023/06/18 11:43:57 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

/* *****************************************************************************
 * 
 * Description : ecrit le char sur la sortie terminal
 *				 
 * Allocation dynamique : non
 *
 * Crash : non
 *
 * Valeur de retour :
 * => Retour =  1, soit le nombre de char ecrit
 *					  
 * ************************************************************************* */

int	ft_print_char(void *c)
{
	char	x;

	x = *(char *)c;
	return (write(1, &x, 1));
}

/* *****************************************************************************
 * id = 6
 * Description : Attribue un int pour identifier le type dans les fonctions
 * 				 ck_front_flag et ck_back_flag, appelle les fonctions qui gerent
 * 				 les flags et qui print le char, renvoie le nb de char ecrit
 *				 
 * Allocation dynamique : non
 *
 * Crash : non, car protegee en amont si ag n'existe pas
 *
 * Valeur de retour :
 * => Retour =  nb de char ecrit sur la sortie terminal
 *					  
 * ************************************************************************* */

int	print_char(t_aglist *ag)
{
	int	count;
	int	id;

	count = 1;
	id = 6;
	count = ck_front_flag(ag, count, id);
	ft_print_char(&ag->content);
	count = ck_back_flag(ag, count);
	return (count);
}
