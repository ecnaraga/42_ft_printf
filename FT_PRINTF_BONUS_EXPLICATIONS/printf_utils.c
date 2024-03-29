/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:39:09 by garance           #+#    #+#             */
/*   Updated: 2023/06/18 13:46:10 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* *****************************************************************************
 * 
 * Description : cherche le nombre d'occurence d'un char dans la string
 *				 
 * Allocation dynamique : non
 *
 * Crash : non
 *
 * Valeur de retour :
 * => Retour = 0 : char absent de la string
 *					  
 * => Retour > 0 : char apparait x fois dans la string 
 *
 * ************************************************************************* */

int	ck_char(char *s, char c)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	if (s)
	{
		while (s[++i])
		{
			if (s[i] == c)
				count++;
		}
	}
	return (count);
}

/* *****************************************************************************
 * 
 * Description : cherche si 1 char de la string set est present dans la string s
 *				 
 * Allocation dynamique : non
 *
 * Crash : non car protegee en amont
 *
 * Valeur de retour :
 * => Retour = 0 : s et set n'ont que des char differents
 *					  
 * => Retour > 0 : s et set ont au minimum un char identique (l'index peut etre)
 * 				   different
 *
 * ************************************************************************* */

int	ck_sset(char *s, char *set)
{
	int	i;
	int	j;

	i = -1;
	while (s && s[++i])
	{
		j = -1;
		while (set[++j])
		{
			if (s[i] == set[j])
				return (j);
		}
	}
	return (-1);
}

/* *****************************************************************************
 * 
 * Description : strlen pour  unsigned int decimal lorsqu'il sera converti dans
 * 				 la base envoyee
 *				 
 * Allocation dynamique : non
 *
 * Crash : non
 *
 * Valeur de retour :
 * => Retour =  nb de digit de l'u int(base 10) passe dans la base en parametre
 *					  
 * ************************************************************************* */


void	digit_len(unsigned int *n, int *j, unsigned int base)
{
	while (*n >= base)
	{
		*j += 1;
		*n = *n / base;
	}
}
