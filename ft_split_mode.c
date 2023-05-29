/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_mode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:47:09 by galambey          #+#    #+#             */
/*   Updated: 2023/05/29 20:34:22 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

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
    printf("ft_c_let s= %s\n", s);
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
        printf("\n1.s[%d] %c\n", i, s[i]);
        if (s[i] == c)
        {
            if (s[i + 1] == '\0')
                break;
            c_let = 2;
        }
        else
            c_let = ft_c_let(s + i, c);
        printf("2.c_let %d\n", c_let);
        array[j] = (char *)malloc(sizeof(char) * (c_let + 1));
        if (!array[j])
            return (ft_free_all(array, j));
        printf("3.array[%d] = %s\n", j, array[j]);
        printf("4. i %d ET s+i %s ET c_let + 1 = %d ET sizeof(array[j] = %ld)\n", i, s + i, c_let + 1, sizeof(array[j]));
        ft_strlcpy(array[j], s + i, c_let + 1);
        printf("5.array[%d] %s\n", j, array[j]);
        j++;
        printf("6.i %d c_let %d\n", i, c_let);
        i += c_let;
        printf("7.i + c_let %d\n", i);
    }
    array[j] = NULL;
    return (array);
}