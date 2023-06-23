/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests_fonctions_separees.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:43:36 by garance           #+#    #+#             */
/*   Updated: 2023/06/11 11:43:38 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/**********************************************************************************/

/*MAIN TEST FT_SPLIT_MODE > Pas de controle si !s car ne sera jamais envoye s=NULL*/
/*TESTS OK NO LEAKS + FT_PRINTF N ENVERRA JAMMAIS UN S==NULL a ft_SPLIT MODE*/

// int main(void)
// {
//   char    *array[15];
//   char    **strs;
//   int     i;
//   int     j;

//   i = 0;
//   array[0] = "B%d\n%sbari";
//   array[1] = "barr%%%e";
//   array[2] = "%%";
//   array[3] = "%s%s%s%s";
//   array[4] = "%%%";
//   array[5] = "%";
//   array[6] = "qwerty";
//   array[7] = "q";
//   array[8] = "";
//   array[9] = "bar%bar";
//   array[10] = "%dr%etr%sf%q";
//   array[11] = "%a%b%c%d%e%f%g%h%i%j%k%l%m%n%o%p%q%r%s%t%u%v%w%x%y%z";
//   array[12]= "%a %b %c %d %e %f %g %h %i %j %k %l %m %n %o %p %q %r %s %t %u %v %w %x %y %z";
//   array[13] = "%%%%%%%%%%%%%%%";
//   array[14] = NULL;
//   while (array[i])
//   {
//       j = 0;
//       strs = ft_split_mode(array[i], '%');
//       if (strs == NULL)
//           return (0);
//       printf("\narray[%d] = '%s'\n", i, array[i]);
//       while (strs[j])
//       {
//           printf("strs[%d] = '%s'\n", j, strs[j]);
//           free(strs[j++]);
//       }
//       free(strs);
//       i++;
//   }
//   return (0);
// }

/**********************************************************************************/

/*    MAIN Test print_char >>>>>>>>> TEST OK  */

// int main(void)
// {
//   int i;
//   int tab[11] = {48, 90, 0, 127, 255, -1, -128, 2147483647, -2147483648, 135, 68};
//   int tmp;
  
//   i = 0;
//   while (i < 11)
//   {
//       printf("int c = %d\nprintf affiche : '", tab[i]);
//       printf("%c", tab[i]);
//       printf("'\nretour prinf = ");
//       printf("%d", printf("%c", tab[i]));
//       printf("\n\n");
//       i++;
//   }
//   i = 0;
//   print_str("************************************************\n");
//   while (i < 11)
//   {
//       print_str("int c = ");
//       print_int(&tab[i]);
//       print_str("\nprint_char affiche : '");
//       print_char(tab[i]);
//       print_str("'\nretour print_char = ");
//       tmp = print_char(tab[i]);
//       print_int(&tmp);
//       print_str("\n\n");
//       i++;
//   }
//   return (0);
// }

/**********************************************************************************/

/*    MAIN Test print_int >>>>>>>>> TEST OK  */

// int main(void)
// {
//     int tab[19] = {2147483647, -2147483648, -1, 1, 0, 10, 1000, -100, -10000, 2, 9, -9, 58, -951753, 999, 50000, 8941, -88746, 990};
//     int i = -1;

//     while (++i < 19)
//     {
//         printf("\n\nprintf affiche : ");
//         printf("%d", tab[i]);
//         printf("\nprintf retour : ");
//         printf("%d", printf("%d", tab[i]));
//     }
//     printf("\n\nprintf affiche : ");
//     printf("%d", 2147483647 + 1);
//     printf("\nprintf retour : ");
//     printf("%d", printf("%d", 2147483647 + 1));
//     printf("\n\nprintf affiche : ");
//     printf("%d", -2147483648 - 1);
//     printf("\nprintf retour : ");
//     printf("%d", printf("%d", -2147483648 - 1));
//     printf("\n");
//     print_str("\n************************************************");
//     i = -1;
//     while (++i < 19)
//     {
//         print_str("\n\nprint_int affiche : ");
//         print_int(tab[i]);
//         print_str("\nprint_int retour : ");
//         print_int(print_int(tab[i]));
//     }
//     print_str("\n\nprint_int affiche : ");
//     print_int(2147483647 + 1);
//     print_str("\nprint_int retour : ");
//     print_int(print_int(2147483647 + 1));
//     print_str("\n\nprint_int affiche : ");
//     print_int(-2147483648 - 1);
//     print_str("\nprint_int retour : ");
//     print_int(print_int(-2147483648 - 1));
//     return (0);
// }

/**********************************************************************************/

/*    MAIN Test print_lowhexa >>>>>>>>> TEST OK  */

// int main(void)
// {
//     int tab[19] = {2147483647, -2147483648, -1, 1, 0, 10, 1000, -100, -10000, 2, 9, -9, 58, -951753, 999, 50000, 8941, -88746, 990};
//     int i = -1;

//     while (++i < 19)
//     {
//         printf("\n\nint n = %d\n", tab[i]);
//         printf("printf affiche : ");
//         printf("%x", tab[i]);
//         printf("\nprintf retour : ");
//         printf("%d", printf("%x", tab[i]));
//     }
//     printf("\n\nint n = %d\n", tab[i]);
//     printf("printf affiche : ");
//     printf("%x", 2147483647 + 1);
//     printf("\nprintf retour : ");
//     printf("%d", printf("%x", 2147483647 + 1));
//     printf("\n\nint n = %d\n", tab[i]);
//     printf("printf affiche : ");
//     printf("%x", -2);
//     printf("\nprintf retour : ");
//     printf("%d", printf("%x", -2));
//     printf("\n\n");
//     i = -1;
//     print_str("************************************************");
//     while (++i < 19)
//     {
//         print_str("\n\nint n = ");
//         print_int(tab[i]);
//         print_str("\nprint_lowhexa affiche : ");
//         print_lowhexa(tab[i]);
//         print_str("\nprint_lowhexa retour : ");
//         print_int(print_lowhexa(tab[i]));
//     }
//     print_str("\n\nint n = ");
//     print_int(tab[i]);
//     print_str("\nprint_lowhexa affiche : ");
//     print_lowhexa(2147483647 + 1);
//     print_str("\nprint_lowhexa retour : ");
//     print_int(print_lowhexa(2147483647 + 1));
//     print_str("\n\nint n = ");
//     print_int(tab[i]);
//     print_str("\nprint_lowhexa affiche : ");
//     print_lowhexa(-2);
//     print_str("\nprint_lowhexa retour : ");
//     print_int(print_lowhexa(-2));
//     return (0);
// }

/**********************************************************************************/

/*    MAIN Test print_ptr >>>>>>>>> TEST OK  */

// int main(void)
// {
//     int i;
//     char *array;
//     char *s[15];
    
//     i = -1;
//     s[0] = "Hi";
//     s[1] = "barr%%%e";
//     s[2] = "%%";
//     s[3] = "%s%s%s%s";
//     s[4] = "%%%";
//     s[5] = "%";
//     s[6] = "qwerty";
//     s[7] = "q";
//     s[8] = "";
//     s[9] = "bar%bar";
//     s[10] = "%dr%etr%sf%q";
//     s[11] = "%a%b%c%d%e%f%g%h%i%j%k%l%m%n%o%p%q%r%s%t%u%v%w%x%y%z";
//     s[12]= "%a %b %c %d %e %f %g %h %i %j %k %l %m %n %o %p %q %r %s %t %u %v %w %x %y %z";
//     s[13] = "%%%%%%%%%%%%%%%";
//     s[14] = NULL;
//     while (++i < 15)
//     {
//         printf("\nprintf affiche : ");
//         printf("%p", s[i]);
//         printf("\n retour printf = ");
//         printf("%d", printf("%p", s[i]));
//         printf("\n");
//     }
//     array = "B%d\n%sbari";
//     printf("\nprintf affiche : ");
//     printf("%p", array);
//     printf("\n retour printf = ");
//     printf("%d", printf("%p", array));
//     printf("\n");
//     array = NULL;
//     printf("\nprintf affiche : ");
//     printf("%p", array);
//     printf("\n retour printf = ");
//     printf("%d", printf("%p", array));
//     printf("\n");
//     print_str("\n************************************************");
//     i = -1;
//     while (++i < 15)
//     {
//         print_str("\n\nprint_ptr affiche : ");
//         print_ptr(s[i]);
//         print_str("\n retour print_ptr = ");
//         print_int(print_ptr(s[i]));
//     }
//     array = "B%d\n%sbari";
//     print_str("\n\nprint_ptr affiche : ");
//     print_ptr(array);
//     print_str("\n retour print_ptr = ");
//     print_int(print_ptr(array));
//     array = NULL;
//     print_str("\n\nprint_ptr affiche : ");
//     print_ptr(array);
//     print_str("\n retour print_ptr = ");
//     print_int(print_ptr(array));
//     return (0);
// }

/**********************************************************************************/

/*    MAIN Test print_str >>>>>>>>> TEST OK  */

// int main(void)
// {
//     int i;
//     char *array[15];
    
//     i = -1;
//     array[0] = "B%d\n%sbari";
//     array[1] = "barr%%%e";
//     array[2] = "%%";
//     array[3] = "%s%s%s%s";
//     array[4] = "%%%";
//     array[5] = "%";
//     array[6] = "qwerty";
//     array[7] = "q";
//     array[8] = "";
//     array[9] = "bar%bar";
//     array[10] = "%dr%etr%sf%q";
//     array[11] = "%a%b%c%d%e%f%g%h%i%j%k%l%m%n%o%p%q%r%s%t%u%v%w%x%y%z";
//     array[12]= "%a %b %c %d %e %f %g %h %i %j %k %l %m %n %o %p %q %r %s %t %u %v %w %x %y %z";
//     array[13] = "%%%%%%%%%%%%%%%";
//     array[14] = NULL;
//     while (++i < 15)
//     {
//         printf("\nprintf affiche : ");
//         printf("%s", array[i]);
//         printf("\n retour printf = ");
//         printf("%d", printf("%s", array[i]));
//         printf("\n");
//     }
//     i = -1;
//     print_str("\n************************************************");
//     while (++i < 15)
//     {
//         print_str("\n\nprint_str affiche : ");
//         print_str(array[i]);
//         print_str("\n retour print_str = ");
//         print_int(print_str(array[i]));
//     }
//     return (0);
// }

/**********************************************************************************/

/*    MAIN Test print_unsignedint >>>>>>>>> TEST OK  */

// int main(void)
// {
//     unsigned int tab[21] = {4294967295, -4294967296, 2147483647, -2147483648, -1, 1, 0, 10, 1000, -100, -10000, 2, 9, -9, 58, -951753, 999, 50000, 2147483647 + 1, -2147483648 - 1, 990};
//     int i = -1;

//     while (++i < 19)
//     {
//         printf("\n\nprintf affiche : ");
//         printf("%u", tab[i]);
//         printf("\nprintf retour : ");
//         printf("%d", printf("%u", tab[i]));
//     }
//     printf("\n\nprintf affiche : ");
//     printf("%u", 4294967295 + 1);
//     printf("\nprintf retour : ");
//     printf("%d", printf("%u", 4294967295 + 1));
//     printf("\n\nprintf affiche : ");
//     printf("%u", -4294967296 - 1);
//     printf("\nprintf retour : ");
//     printf("%d", printf("%u", -4294967296 - 1));
//     printf("\n");
//     i = -1;
//     print_str("\n************************************************");
//     while (++i < 19)
//     {
//         print_str("\n\nprint_unsignedint affiche : ");
//         print_unsignedint(tab[i]);
//         print_str("\nprint_unsignedint retour : ");
//         print_int(print_unsignedint(tab[i]));
//     }
//     print_str("\n\nprint_unsignedint affiche : ");
//     print_unsignedint(4294967295 + 1);
//     print_str("\nprint_unsignedint retour : ");
//     print_int(print_unsignedint(4294967295 + 1));
//     print_str("\n\nprint_unsignedint affiche : ");
//     print_unsignedint(-4294967296 - 1);
//     print_str("\nprint_unsignedint retour : ");
//     print_int(print_unsignedint(-4294967296 - 1));
//     return (0);
// }

/**********************************************************************************/

/*    MAIN Test print_upphexa >>>>>>>>> TEST OK  */

// int main(void)
// {
//     int tab[19] = {2147483647, -2147483648, -1, 1, 0, 10, 1000, -100, -10000, 2, 9, -9, 58, -951753, 999, 50000, 8941, -88746, 990};
//     int i = -1;

//     while (++i < 19)
//     {
//         printf("\n\nint n = %d\n", tab[i]);
//         printf("printf affiche : ");
//         printf("%X", tab[i]);
//         printf("\nprintf retour : ");
//         printf("%d", printf("%X", tab[i]));
//     }
//     printf("\n\nint n = %d\n", tab[i]);
//     printf("printf affiche : ");
//     printf("%X", 2147483647 + 1);
//     printf("\nprintf retour : ");
//     printf("%d", printf("%X", 2147483647 + 1));
//     printf("\n\nint n = %d\n", tab[i]);
//     printf("printf affiche : ");
//     printf("%X", -2);
//     printf("\nprintf retour : ");
//     printf("%d", printf("%X", -2));
//     printf("\n\n");
//     i = -1;
//     print_str("************************************************");
//     while (++i < 19)
//     {
//         print_str("\n\nint n = ");
//         print_int(tab[i]);
//         print_str("\nprint_upphexa affiche : ");
//         print_upphexa(tab[i]);
//         print_str("\nprint_upphexa retour : ");
//         print_int(print_upphexa(tab[i]));
//     }
//     print_str("\n\nint n = ");
//     print_int(tab[i]);
//     print_str("\nprint_upphexa affiche : ");
//     print_upphexa(2147483647 + 1);
//     print_str("\nprint_upphexa retour : ");
//     print_int(print_upphexa(2147483647 + 1));
//     print_str("\n\nint n = ");
//     print_int(tab[i]);
//     print_str("\nprint_upphexa affiche : ");
//     print_upphexa(-2);
//     print_str("\nprint_upphexa retour : ");
//     print_int(print_upphexa(-2));
//     return (0);
// }

/**********************************************************************************/

