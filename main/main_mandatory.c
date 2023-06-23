/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mandatory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <galambey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:43:57 by garance           #+#    #+#             */
/*   Updated: 2023/06/19 14:58:40 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/**********************************************************************************/

/*  MAIN TEST MANDATORY FT_PRINTF NO FLAG ok + VALGRIND ok   */

int main(void)
{
int der = 9;
  
  printf("\nTESTWHATTHEFUCK!!!!!!!!!!!!\n\n");
  printf("    retour : %d", printf("|%20+d|\n", der));
  ft_printf("    retour : %d", ft_printf("|%20+d|\n", der));

  printf("\nTESTWHATTHEFUCK!!!!!!!!!!!!\n\n");
  printf("    retour : %d", printf("|%20%|\n", der));
  ft_printf("    retour : %d", ft_printf("|%20%|\n", der));

  printf("\nTESTWHATTHEFUCK!!!!!!!!!!!!\n\n");
  printf("    retour : %d", printf("|%20+%|\n", der));
  ft_printf("    retour : %d", ft_printf("|%20+%|\n", der));
  
  printf("\nTESTWHATTHEFUCK!!!!!!!!!!!!\n\n");
  printf("    retour : %d", printf("|%20y%|\n", der));
  ft_printf("    retour : %d", ft_printf("|%20y%|\n", der));

  printf("\nTESTWHATTHEFUCK!!!!!!!!!!!!\n\n");
  printf("    retour : %d", printf("|%+20%|\n", der));
  ft_printf("    retour : %d", ft_printf("|%+20%|\n", der));

  printf("\nTESTWHATTHEFUCK!!!!!!!!!!!!\n\n");
  printf("    retour : %d", printf("|%20+%d|\n", der));
  ft_printf("    retour : %d", ft_printf("|%20+%d|\n", der));
  printf("\n\n");

  // TEST %c ok + VALGRIND ok******************************************************************************
  int i = -1;
  int c[17] = {48, 90, 0, 127, 255, -1, -128, 2147483647, -2147483648, 135, 68, 256, 96, 52, 100, 92, 110};
  char *str = "Hello world!!!%";
  
  ft_printf("\n***********TEST %%c***********");
  ft_printf("\nFT_PRINTF\nPRINTF\n\n");
  while (++i < 17)
  {
    ft_printf("    retour : %d", ft_printf("%c", c[i]));
    ft_printf("\n");
    printf("    retour : %d", printf("%c", c[i]));
    printf("\n\n");
    // ft_printf("%c", c[i]);
    // ft_printf("\n");
    // printf("%c", c[i]);
    // printf("\n\n");
  }
  i = -1;
  while (str[++i])
  {
    ft_printf("    retour : %d", ft_printf("%c", str[i]));
    ft_printf("\n");
    printf("    retour : %d", printf("%c", str[i]));
    printf("\n\n");
  }

  // TEST %d ok + Valgrind ok******************************************************************************
  
  int tab[19] = {2147483647, -2147483648, -1, 1, 0, 10, 1000, -100, -10000, 2, 9, -9, 58, -951753, 999, 50000, 8941, -88746, 990};

  ft_printf("***********TEST %%d***********\n\n");
  i = -1;
  while (++i < 19)
  {
    ft_printf("    retour : %d", ft_printf("%d", tab[i]));
    ft_printf("\n");
    printf("    retour : %d", printf("%d", tab[i]));
    printf("\n\n");
  }
  ft_printf("    retour : %d", ft_printf("%d", 2147483647 + 1));
  ft_printf("\n");
  printf("    retour : %d", printf("%d", 2147483647 + 1));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("%d", -2147483648 - 1));
  ft_printf("\n");
  printf("    retour : %d", printf("%d", -2147483648 - 1));
  printf("\n\n");

  // TEST %i ok + VALGRIND ok******************************************************************************

  ft_printf("***********TEST %%i***********\n\n");
  i = -1;
  while (++i < 19)
  {
    ft_printf("    retour : %d", ft_printf("%i", tab[i]));
    ft_printf("\n");
    printf("    retour : %d", printf("%i", tab[i]));
    printf("\n\n");
  }
  ft_printf("    retour : %d", ft_printf("%i", 2147483647 + 1));
  ft_printf("\n");
  printf("    retour : %d", printf("%i", 2147483647 + 1));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("%i", -2147483648 - 1));
  ft_printf("\n");
  printf("    retour : %d", printf("%i", -2147483648 - 1));
  printf("\n\n");
  
  // TEST %u ok + VALGRIND ok******************************************************************************
  
  unsigned int tabu[21] = {4294967295, -4294967296, 2147483647, -2147483648, -1, 1, 0, 10, 1000, -100, -10000, 2, 9, -9, 58, -951753, 999, 50000, 2147483647 + 1, -2147483648 - 1, 990};

  ft_printf("***********TEST %%u***********\n\n");
  i = -1;
  while (++i < 21)
  {
    ft_printf("    retour : %d", ft_printf("%u", tabu[i]));
    ft_printf("\n");
    printf("    retour : %d", printf("%u", tabu[i]));
    printf("\n\n");
  }
  ft_printf("    retour : %d", ft_printf("%u", 4294967295 + 1));
  ft_printf("\n");
  printf("    retour : %d", printf("%u", 4294967295 + 1));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("%u", -4294967296 - 1));
  ft_printf("\n");
  printf("    retour : %d", printf("%u", -4294967296 - 1));
  printf("\n\n");

  // TEST %x ok + VALGRIND ok******************************************************************************

  ft_printf("***********TEST %%x***********\n\n");
  i = -1;

  while (++i < 19)
  {
    ft_printf("    retour : %d", ft_printf("%x", tab[i]));
    ft_printf("\n");
    printf("    retour : %d", printf("%x", tab[i]));
    printf("\n\n");
  }
  ft_printf("    retour : %d", ft_printf("%x", 2147483647 + 1));
  ft_printf("\n");
  printf("    retour : %d", printf("%x", 2147483647 + 1));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("%x", -2147483648 - 1));
  ft_printf("\n");
  printf("    retour : %d", printf("%x", -2147483648 - 1));
  printf("\n\n");

  // TEST %X ok + VALGRIND ok******************************************************************************

  ft_printf("***********TEST %%X***********\n\n");
  i = -1;
  while (++i < 19)
  {
    ft_printf("    retour : %d", ft_printf("%X", tab[i]));
    ft_printf("\n");
    printf("    retour : %d", printf("%X", tab[i]));
    printf("\n\n");
  }
  ft_printf("    retour : %d", ft_printf("%X", 2147483647 + 1));
  ft_printf("\n");
  printf("    retour : %d", printf("%X", 2147483647 + 1));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("%X", -2147483648 - 1));
  ft_printf("\n");
  printf("    retour : %d", printf("%X", -2147483648 - 1));
  printf("\n\n");
  
  // TEST %s ok + VALGRIND ok******************************************************************************
    
  char *array[15]; 
  
  i = -1;
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
  array[13] = "%%%%%%%%%%%%%%%";
  array[14] = NULL;
  
  ft_printf("***********TEST %%s***********\n\n");
  while (++i < 15)
  {
    ft_printf("    retour : %d", ft_printf("%s", array[i]));
    ft_printf("\n");
    printf("    retour : %d", printf("%s", array[i]));
    printf("\n\n");
  }
  
  // TEST %p ok + VALGRIND ok******************************************************************************
  
  char *s[15];
  
  i = -1;
  s[0] = "Hi";
  s[1] = "barr%%%e";
  s[2] = "%%";
  s[3] = "%s%s%s%s";
  s[4] = "%%%";
  s[5] = "%";
  s[6] = "qwerty";
  s[7] = "q";
  s[8] = "";
  s[9] = "bar%bar";
  s[10] = "%dr%etr%sf%q";
  s[11] = "%a%b%c%d%e%f%g%h%i%j%k%l%m%n%o%p%q%r%s%t%u%v%w%x%y%z";
  s[12]= "%a %b %c %d %e %f %g %h %i %j %k %l %m %n %o %p %q %r %s %t %u %v %w %x %y %z";
  s[13] = "%%%%%%%%%%%%%%%";
  s[14] = NULL;
  
  ft_printf("***********TEST %%p***********\n\n");
  while (++i < 15)
  {
    ft_printf("    retour : %d", ft_printf("%p", s[i]));
    ft_printf("\n");
    printf("    retour : %d", printf("%p", s[i]));
    printf("\n\n");
  }
  
  // TEST 1ER ARG sans cpsdiuxX ok + VALGRIND ok******************************************************************************
  
  ft_printf("***********TEST 1ER ARG sans cpsdiuxX***********\n\n");
  
  ft_printf("    retour : %d", ft_printf(""));
  ft_printf("\n");
  printf("    retour : %d", printf(""));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf(NULL));
  ft_printf("\n");
  printf("    retour : %d", printf(NULL));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("%"));
  ft_printf("\n");
  printf("    retour : %d", printf("%"));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("%%"));
  ft_printf("\n");
  printf("    retour : %d", printf("%%"));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("aa%%%%%%%%%%%%%%%%%"));
  ft_printf("\n");
  printf("    retour : %d", printf("aa%%%%%%%%%%%%%%%%%"));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("%%%%%%%%%%%%%%%%"));
  ft_printf("\n");
  printf("    retour : %d", printf("%%%%%%%%%%%%%%%%"));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("%yl")); //ERREUR// SEGFAULT
  ft_printf("\n");
  printf("    retour : %d", printf("%yl"));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("Hi \n you"));
  ft_printf("\n");
  printf("    retour : %d", printf("Hi \n you"));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("m"));
  ft_printf("\n");
  printf("    retour : %d", printf("m"));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf(0));
  ft_printf("\n");
  printf("    retour : %d", printf(0));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("0"));
  ft_printf("\n");
  printf("    retour : %d", printf("0"));
  printf("\n\n");
    
  // TEST FINAL ******************************************************************************
  
  ft_printf("***********TEST FINAL***********\n\n");

  char  *s1 = "Hello you";
  void  *ptr1 = NULL;
  void  *ptr2 = s1;

  ft_printf("    retour : %d", ft_printf("%p")); //UNDIFINED BEHAVIOR MAIS NE CRASH PAS
  ft_printf("\n");
  printf("    retour : %d", printf("%p"));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("s1 : %s et len = %d et adresse s1 : %p", s1, ft_strlen(s1), s1));
  ft_printf("\n");
  printf("    retour : %d", printf("s1 : %s et len = %d et adresse s1 : %p", s1, ft_strlen(s1), s1));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("\n"));
  ft_printf("\n");
  printf("    retour : %d", printf("\n"));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("%c%s%d%i%u%p%x%X%%%", s1[0], s, 38, i, 2147654000, s, ft_strlen(array[0]), ft_strlen(array[0])));
  ft_printf("\n");
  printf("    retour : %d", printf("%c%s%d%i%u%p%x%X%%%", s1[0], s, 38, i, 2147654000, s, ft_strlen(array[0]), ft_strlen(array[0])));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("%c%s%d%i%u%p%x%X%%", s1[0], s, 38, i, 2147654000, s, ft_strlen(array[0]), ft_strlen(array[0])));
  ft_printf("\n");
  printf("    retour : %d", printf("%c%s%d%i%u%p%x%X%%", s1[0], s, 38, i, 2147654000, s, ft_strlen(array[0]), ft_strlen(array[0])));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf(NULL));
  ft_printf("\n");
  printf("    retour : %d", printf(NULL));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("ptr2 : %p et s1 %p\n", ptr2, s1));
  ft_printf("\n");
  printf("    retour : %d", printf("ptr2 : %p et s1 %p\n", ptr2, s1));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf(""));
  ft_printf("\n");
  printf("    retour : %d", printf(""));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("%c", NULL));
  ft_printf("\n");
  printf("    retour : %d", printf("%c", NULL));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("(null)", c));
  ft_printf("\n");
  printf("    retour : %d", printf("(null)", c));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("%s", (char)0));
  ft_printf("\n");
  printf("    retour : %d", printf("%s", (char)0));
  printf("\n\n");
  ft_printf("    retour : %d", ft_printf("(null)", (char)0));
  ft_printf("\n");
  printf("    retour : %d", printf("(null)", (char)0));
  printf("\n\n");

  return (0);
}
/**********************************************************************************/

/*  MAIN TEST FT_PRINTF AVEC FLAG ok + VALGRIND ok   */

// int main(void)
// {

//   // TEST %c ok + VALGRIND ok******************************************************************************
//   int i = -1;
//   int c[17] = {48, 90, 0, 127, 255, -1, -128, 2147483647, -2147483648, 135, 68, 256, 96, 52, 100, 92, 110};
//   char *str = "Hello world!!!%";
  
//   ft_printf("***********TEST %%c***********");
//   ft_printf("FT_PRINTF\nPRINTF\n\n");
//   while (++i < 17)
//   {
//     ft_printf("    retour : %d", ft_printf("%c", c[i]));
//     ft_printf("\n");
//     printf("    retour : %d", printf("%c", c[i]));
//     printf("\n\n");
//   }
//   i = -1;
//   while (str[++i])
//   {
//     ft_printf("    retour : %d", ft_printf("%c", str[i]));
//     ft_printf("\n");
//     printf("    retour : %d", printf("%c", str[i]));
//     printf("\n\n");
//   }

//   // TEST %d ok + Valgrind ok******************************************************************************
  
//   int tab[19] = {2147483647, -2147483648, -1, 1, 0, 10, 1000, -100, -10000, 2, 9, -9, 58, -951753, 999, 50000, 8941, -88746, 990};

//   ft_printf("***********TEST %%d***********\n\n");
//   i = -1;
//   while (++i < 19)
//   {
//     ft_printf("    retour : %d", ft_printf("%d", tab[i]));
//     ft_printf("\n");
//     printf("    retour : %d", printf("%d", tab[i]));
//     printf("\n\n");
//   }
//   // ft_printf("    retour : %d", ft_printf("%d", -2147483648 - 1));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("%d", -2147483648 - 1));
//   // printf("\n\n");

//   // TEST %i ok + VALGRIND ok******************************************************************************

//   ft_printf("***********TEST %%i***********\n\n");
//   i = -1;
//   while (++i < 19)
//   {
//     ft_printf("    retour : %d", ft_printf("%i", tab[i]));
//     ft_printf("\n");
//     printf("    retour : %d", printf("%i", tab[i]));
//     printf("\n\n");
//   }
//   // ft_printf("    retour : %d", ft_printf("%i", -2147483648 - 1));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("%i", -2147483648 - 1));
//   // printf("\n\n");
  
//   // TEST %u ok + VALGRIND ok******************************************************************************
  
//   unsigned int tabu[16] = {4294967295, 2147483647, 1, 0, 10, 1000, 100, 10000, 2, 9, 58, 951753, 999, 50000, 990};

//   ft_printf("***********TEST %%u***********\n\n");
//   i = -1;
//   while (++i < 15)
//   {
//     ft_printf("    retour : %d", ft_printf("%u", tabu[i]));
//     ft_printf("\n");
//     printf("    retour : %d", printf("%u", tabu[i]));
//     printf("\n\n");
//   }
//   // ft_printf("    retour : %d", ft_printf("%u", 4294967295 + 1));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("%u", 4294967295 + 1));
//   // printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf("%u", -4294967296 - 1));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("%u", -4294967296 - 1));
//   // printf("\n\n");

//   // TEST %x ok + VALGRIND ok******************************************************************************

//   ft_printf("***********TEST %%x***********\n\n");
//   i = -1;

//   while (++i < 19)
//   {
//     ft_printf("    retour : %d", ft_printf("%x", tab[i]));
//     ft_printf("\n");
//     printf("    retour : %d", printf("%x", tab[i]));
//     printf("\n\n");
//   }
//   // ft_printf("    retour : %d", ft_printf("%x", -2147483648 - 1));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("%x", -2147483648 - 1));
//   // printf("\n\n");

//   // TEST %X ok + VALGRIND ok******************************************************************************

//   ft_printf("***********TEST %%X***********\n\n");
//   i = -1;
//   while (++i < 19)
//   {
//     ft_printf("    retour : %d", ft_printf("%X", tab[i]));
//     ft_printf("\n");
//     printf("    retour : %d", printf("%X", tab[i]));
//     printf("\n\n");
//   }
//   // ft_printf("    retour : %d", ft_printf("%X", -2147483648 - 1));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("%X", -2147483648 - 1));
//   // printf("\n\n");
  
//   // TEST %s ok + VALGRIND ok******************************************************************************
    
//   char *array[15]; 
  
//   i = -1;
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
  
//   ft_printf("***********TEST %%s***********\n\n");
//   while (++i < 15)
//   {
//     ft_printf("    retour : %d", ft_printf("%s", array[i]));
//     ft_printf("\n");
//     printf("    retour : %d", printf("%s", array[i]));
//     printf("\n\n");
//   }
  
//   // TEST %p ok + VALGRIND ok******************************************************************************
  
//   char *s[15];
  
//   i = -1;
//   s[0] = "Hi";
//   s[1] = "barr%%%e";
//   s[2] = "%%";
//   s[3] = "%s%s%s%s";
//   s[4] = "%%%";
//   s[5] = "%";
//   s[6] = "qwerty";
//   s[7] = "q";
//   s[8] = "";
//   s[9] = "bar%bar";
//   s[10] = "%dr%etr%sf%q";
//   s[11] = "%a%b%c%d%e%f%g%h%i%j%k%l%m%n%o%p%q%r%s%t%u%v%w%x%y%z";
//   s[12]= "%a %b %c %d %e %f %g %h %i %j %k %l %m %n %o %p %q %r %s %t %u %v %w %x %y %z";
//   s[13] = "%%%%%%%%%%%%%%%";
//   s[14] = NULL;
  
//   ft_printf("***********TEST %%p***********\n\n");
//   while (++i < 15)
//   {
//     ft_printf("    retour : %d", ft_printf("%p", s[i]));
//     ft_printf("\n");
//     printf("    retour : %d", printf("%p", s[i]));
//     printf("\n\n");
//   }
  
//   // TEST 1ER ARG sans cpsdiuxX ok + VALGRIND ok******************************************************************************
  
//   ft_printf("***********TEST 1ER ARG sans cpsdiuxX***********\n\n");
  
//   // ft_printf("    retour : %d", ft_printf(""));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf(""));
//   // printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf(NULL));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf(NULL));
//   // printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf("%"));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("%"));
//   // printf("\n\n");
//   ft_printf("    retour : %d", ft_printf("%%"));
//   ft_printf("\n");
//   printf("    retour : %d", printf("%%"));
//   printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf("aa%%%%%%%%%%%%%%%%%"));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("aa%%%%%%%%%%%%%%%%%"));
//   // printf("\n\n");
//   ft_printf("    retour : %d", ft_printf("%%%%%%%%%%%%%%%%"));
//   ft_printf("\n");
//   printf("    retour : %d", printf("%%%%%%%%%%%%%%%%"));
//   printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf("%ly")); //ERREUR// SEGFAULT
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("%ly"));
//   // printf("\n\n");
//   ft_printf("    retour : %d", ft_printf("Hi \n you"));
//   ft_printf("\n");
//   printf("    retour : %d", printf("Hi \n you"));
//   printf("\n\n");
//   ft_printf("    retour : %d", ft_printf("m"));
//   ft_printf("\n");
//   printf("    retour : %d", printf("m"));
//   printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf(0));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf(0));
//   // printf("\n\n");
//   ft_printf("    retour : %d", ft_printf("0"));
//   ft_printf("\n");
//   printf("    retour : %d", printf("0"));
//   printf("\n\n");
    
//   // TEST FINAL ******************************************************************************
  
//   ft_printf("***********TEST FINAL***********\n\n");

//   char  *s1 = "Hello you";
//   //void  *ptr1 = NULL;
//   void  *ptr2 = s1;

//   // ft_printf("    retour : %d", ft_printf("%p")); //UNDIFINED BEHAVIOR MAIS NE CRASH PAS
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("%p"));
//   // printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf("s1 : %s et len = %d et adresse s1 : %p", s1, ft_strlen(s1), s1));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("s1 : %s et len = %d et adresse s1 : %p", s1, ft_strlen(s1), s1));
//   // printf("\n\n");
//   ft_printf("    retour : %d", ft_printf("\n"));
//   ft_printf("\n");
//   printf("    retour : %d", printf("\n"));
//   printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf("%c%s%d%i%u%p%x%X%%%", s1[0], s1, 38, i, 2147654000, s, ft_strlen(array[0]), ft_strlen(array[0])));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("%c%s%d%i%u%p%x%X%%%", s1[0], s1, 38, i, 2147654000, s, ft_strlen(array[0]), ft_strlen(array[0])));
//   // printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf("%c%s%d%i%u%p%x%X%%", s1[0], s1, 38, i, 2147654000, s, ft_strlen(array[0]), ft_strlen(array[0])));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("%c%s%d%i%u%p%x%X%%", s1[0], s1, 38, i, 2147654000, s, ft_strlen(array[0]), ft_strlen(array[0])));
//   // printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf(NULL));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf(NULL));
//   // printf("\n\n");
//   ft_printf("    retour : %d", ft_printf("ptr2 : %p et s1 %p\n", ptr2, s1));
//   ft_printf("\n");
//   printf("    retour : %d", printf("ptr2 : %p et s1 %p\n", ptr2, s1));
//   printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf(""));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf(""));
//   // printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf("%c", NULL));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("%c", NULL));
//   // printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf("(null)", c));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("(null)", c));
//   // printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf("%s", (char)0));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("%s", (char)0));
//   // printf("\n\n");
//   // ft_printf("    retour : %d", ft_printf("(null)", (char)0));
//   // ft_printf("\n");
//   // printf("    retour : %d", printf("(null)", (char)0));
//   // printf("\n\n");

//   return (0);
// }

