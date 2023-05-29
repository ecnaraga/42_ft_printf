/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:47:50 by galambey          #+#    #+#             */
/*   Updated: 2023/05/29 20:02:19 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

//main ft_split_mode > Pas de controle si !s car ne sera jamais envoye s=NULL
int main(void)
{
    char    *array[15];
    char    **strs;
    int     i;
    int     c_wd;
    int     j;

    i = 0;
    array[0] = "B%d\n%sbari";
    array[1] = "barr%%%e";
    array[2] = "%%";
    array[3] = "%s%s%s%s";
    array[4] = "%%%";
    array[5] = "%";
    array[6] = "qwerty";
    array[7] = "q";
    array[8] = "";
    array[9] = "bar%bar";
    array[10] = "%dr%etr%sf%q";
    array[11] = "%a%b%c%d%e%f%g%h%i%j%k%l%m%n%o%p%q%r%s%t%u%v%w%x%y%z";
    array[12]= "%a %b %c %d %e %f %g %h %i %j %k %l %m %n %o %p %q %r %s %t %u %v %w %x %y %z";
    array[13] = "";
    array[14] = NULL;
    while (array[i])
    {
        j = 0;
        strs = ft_split_mode(array[i], '%');
        c_wd = ft_c_wd(array[i], '%');
        printf("c_wd %d\n", c_wd);
        printf("\narray[%d] = '%s'\n", i, array[i]);
        while (j < c_wd)
        {
            printf("strs[%d] = '%s'\n", j, strs[j]);
            printf("J %d\n", j);
            free(strs[j]);
            printf("test");
            j++;
        }
        free(strs);
        i++;
    }
    
    return (0);
}