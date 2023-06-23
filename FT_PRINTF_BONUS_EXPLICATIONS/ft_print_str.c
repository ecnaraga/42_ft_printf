/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:08:52 by galambey          #+#    #+#             */
/*   Updated: 2023/06/18 12:01:00 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* *****************************************************************************
 * 
 * Description : Compte la len de la string qui sera print
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non car protegee en amont
 *
 * ************************************************************************* */

static void	init_count(char *str, t_aglist *ag, int *count)
{
	if (!str)
		*count = 6;
	else if (ag->prec != -1 && (size_t)ag->prec < ft_strlen(str))
		*count = ag->prec;
	else
		*count = ft_strlen(str);
}

/* *****************************************************************************
 * id = 7
 * Description : Attribue un int pour identifier le type dans les fonctions
 * 				 ck_front_flag et ck_back_flag, appelle les fonctions qui gerent
 * 				 les flags et qui print la string
 *				 
 * Allocation dynamique : non
 *
 * Crash : non, car protegee en amont si ag n'existe pas
 *
 * Valeur de retour :
 * => Retour =  nb de char ecrit sur la sortie terminal
 *					  
 * ************************************************************************* */

int	print_str(t_aglist *ag)
{
	char	*str;
	int		i;
	int		count;
	int		id;

	str = (char *)ag->content;
	i = 0;
	if (!str && ag->prec > -1 && ag->prec < 6)
	{
		ag->content = "";
		return (print_str(ag));
	}
	else
	{
		init_count(str, ag, &count);
		id = 7;
		count = ck_front_flag(ag, count, id);
		if (!str)
			write(1, "(null)", 6);
		while (str && str[i] && (ag->prec == -1 || ag->prec-- > 0))
			write(1, &str[i++], 1);
		count = ck_back_flag(ag, count);
	}
	return (count);
}
