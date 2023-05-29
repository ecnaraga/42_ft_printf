/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_mode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <galambey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:47:09 by galambey          #+#    #+#             */
/*   Updated: 2023/05/29 17:07:44 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_c_wd(char *s, char c) //a mettre en static pour le rendu
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
        if (s[i] && s[i + 1] && s[i] == c)
        {
            count++;
            i+=2;
        }
        if (s[i] && s[i + 1] == '\0' && s[i] == c)
            return (count);
    }
    return (count);
}

static void    *ft_free_all(char **array, int j)
{
    int i;

    i = 0;
    while (i < j)
        free(array[i++]);
    free(array);
    return (NULL);
}

static int ft_c_let(char *s, char c)
{
    int i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    return (i);
}

char	**ft_split_mode(char *s, char c) // comme appel protege dans ft_printf, s existe toujours mais peut avoir une len de 0, que se passe -t-il dans ce cas?
{
	char **array;
    int c_wd;
    int c_let;
	int i;
    int j;
    
    c_wd = ft_c_wd(s, c);
    array = (char **)malloc(sizeof(char) * (c_wd + 1));
    if (!array)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            if (s[i + 1] == '\0')
                break;
            c_let = 2;
        }
        else
            c_let = ft_c_let(s + i, c);
        array[j] = (char *)malloc(sizeof(char) * (c_let + 1));
        if (!array[j])
            return (ft_free_all(array, j));
        ft_strlcpy(array[j++], s + i, c_let + 1);
        i += c_let;
    }
    array[j] = NULL;
    return (array);
}