/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_mode.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:44:03 by garance           #+#    #+#             */
/*   Updated: 2023/06/18 13:22:46 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* *****************************************************************************
 * 
 * Description : Atoi modifie qui renvoie un code erreur si string ne commence
 * 				 pas par un digit ou si le nombre est plus grand qu l'int max
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * Valeur de retour :
 * => Retour = -2 : le nombre est plus grand que l'int max
 *					  
 * => Retour = -1 : la string ne commence pas par un digit
 * 
 * => Retour = n : la string convertie en int
 *
 * ************************************************************************* */

long int	ft_atoi_mode(char *str)
{
	int			i;
	long int	n;
	int			count;

	n = 0;
	i = 0;
	count = 0;
	if (!str)
		return (-1);
	while (ck_char("0-# +", str[i]) > 0)
		i++;
	if (!str[i] || str[i] < '1' || str[i] > '9')
		return (-1);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i++] - 48;
		count++;
	}
	if (n > 2147483647 || count > 10)
		return (-2);
	return (n);
}
