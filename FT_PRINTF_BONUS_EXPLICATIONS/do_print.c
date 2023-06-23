/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:08:26 by galambey          #+#    #+#             */
/*   Updated: 2023/06/18 11:13:45 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* *****************************************************************************
 * 
 * Description : Cree un tableau de pointeur sur fonction et en fonction du char
 * 				 recu en parametre, renverra la fonction stockee a l'index de la
 * 				 valeur ascii du char.
 * 
 * 				 Les autres cases ne sont pas initialisees.
 * 
 * 				 Le type t_print a ete defini dans le .h comme ceci : 
 * 				 typedef int		(*t_print)(t_aglist *ag);
 *  			 Cela signifie que toutes les fonctions dont les pointeurs sont
 * 				 stockes dans le tableau devront avoir le prototype suivant : 
 * 				 int la_fonction(t_aglist *ag)
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Oui si le mauvais parametre est envoye et qu'il n'y a rien de stocke
 *
 * Valeur de retour :
 * => Retour =  La fonction correspondante
 *					  
 * ************************************************************************* */

static t_print	ft_storage(int c)
{
	t_print	*storage;

	storage = (t_print[128]){
	['c'] = print_char,
	['s'] = print_str,
	['p'] = print_ptr,
	['d'] = print_int,
	['i'] = print_int,
	['u'] = print_unsignedint,
	['x'] = print_lowhexa,
	['X'] = print_upphexa};
	return (storage[c]);
}

/* *****************************************************************************
 * 
 * Description : 1.Alloue la memoire a la structure qui contiendra l'argument et
 * 				 les flags :
 * 				 - content : pointeur de l'argument recupere par va_arg (void *)
 * 				 	pour contenir tout types (int, char, pointeur, ...)
 * 				 - len : longueur de l'argument s'il etatit transforme en string
 * 				 - flag : string contenant les flags presents "0. #+-"
 * 				 - nb : le flag nb, 1ere string de digit AVANT le flag .
 * 				 - prec (ou precision) : string de digit APRES le flag .
 * 				 2. Envoie a ft_make_arg qui remplira ce qui est relatif aux flags
 * 				 3. Recupere la fonction a appliquer en fonction de cpsdiuxX%,
 * 				    ainsi que l'argument avec va_start, applique la fonction a
 * 				 	l'argument, free la structure et retourne l'index du
 * 				 	cpsdiuxX% a partir du char apres le %
 *				 
 * Allocation dynamique : Oui 1x et free
 *
 * Crash : Non car protegee avant appel
 *
 * Valeur de retour :
 * => Retour j = -2 : Allocation dynamique a echouee 
 *					  
 * => Retour j != -2 : index du cpsdiuxX% a partir du char apres le %
 *					  
 * ************************************************************************* */

int	ft_arg(va_list ap, char *s, int *count)
{
	t_aglist	*ag;
	t_print		print;
	int			j;
	int			i;

	j = 0;
	i = 0;
	ag = (t_aglist *)malloc(sizeof(t_aglist));
	if (!ag)
		return (-2);
	j = ft_make_arg(ag, (char *)s + 1, &i);
	if (j == -2)
		return (j);
	if (s[1 + j] == '%')
		*count += write(1, "%", 1);
	else
	{
		print = ft_storage(s[1 + j]);
		ag->content = va_arg(ap, void *);
		*count += print(ag);
		ft_free_arg(ag, 0);
	}
	return (j);
}
