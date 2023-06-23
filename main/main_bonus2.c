/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <galambey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:47:50 by galambey          #+#    #+#             */
/*   Updated: 2023/06/14 13:20:24 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/*  MAIN TEST MANDATORY FT_PRINTF NO FLAG ok + VALGRIND ok   */

int main(void)
{
  // char c = 'a';
  int c = -1;
  int i = 0;
  
//******************************%c***********************************

  printf("*****************%%c**********************\n");
  
  printf("|%0d|\n", c);
  ft_printf("|%0d|\n", c);

  printf("\nTEST %d\n\n", i++);
  printf("|%#d|\n", c);
  ft_printf("|%#d|\n", c);

  printf("\nTEST %d\n\n", i++);
  printf("|% d|\n", c);
  ft_printf("|% d|\n", c);

  printf("\nTEST %d\n\n", i++);
  printf("|%+d|\n", c);
  ft_printf("|%+d|\n", c);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%-d|\n", c);
  ft_printf("|%-d|\n", c);

  printf("\nTEST %d\n\n", i++);
  printf("|%010d|\n", c);
  ft_printf("|%010d|\n", c);

  printf("\nTEST %d\n\n", i++);
  printf("|%#10d|\n", c);
  ft_printf("|%#10d|\n", c);

  printf("\nTEST %d\n\n", i++);
  printf("|% 10d|\n", c);
  ft_printf("|% 10d|\n", c);

  printf("\nTEST %d\n\n", i++);
  printf("|%+10d|\n", c);
  ft_printf("|%+10d|\n", c);

  printf("\nTEST %d\n\n", i++);
  printf("|%-10d|\n", c);
  ft_printf("|%-10d|\n", c);

    //************%c et ' ' et nb**************

  ft_printf("|% 30d|\n", c);
  printf("|% 30d|\n", c);
  // ft_printf("    retour : %d", ft_printf("|% 30d|\n", c));
  // printf("    retour : %d", printf("|% 30d|\n", c));

  printf("\nTEST %d\n\n", i++);
  ft_printf("|% 1d|\n", c);
  printf("|% 1d|\n", c);

  printf("\nTEST %d\n\n", i++);
  ft_printf("|% 0d|\n", c);
  printf("|% 0d|\n", c);

  printf("\nTEST %d\n\n", i++);
  ft_printf("|% 2d|\n", c);
  printf("|% 2d|\n", c);

  printf("\nTEST %d\n\n", i++);
  ft_printf("|% d|\n", c);
  printf("|% d|\n", c);

    //************%c et '0' et nb**************

  printf("\nTEST %d\n\n", i++);
  ft_printf("|%030d|\n", c);
  printf("|%030d|\n", c);

    //************%c et nb**************

  printf("\nTEST %d\n\n", i++);
  ft_printf("|%30d|\n", c);
  printf("|%30d|\n", c);

  //************%c et '-' et nb**************

  printf("\nTEST %d\n\n", i++);
  ft_printf("|%-30d|\n", c);
  printf("|%-30d|\n", c);

  //************%c et '0' et '-' et nb**************

  printf("\nTEST %d\n\n", i++);
  ft_printf("|% -30d|\n", c);
  printf("|% -30d|\n", c);

  printf("\nTEST %d\n\n", i++);
  ft_printf("|%- 30d|\n", c);
  printf("|%- 30d|\n", c);

  //************%c et '+' et nb**************

  printf("\nTEST %d\n\n", i++);
  ft_printf("|%+d|\n", c);
  printf("|%+d|\n", c);

  printf("\nTEST %d\n\n", i++);
  ft_printf("|%+50d|\n", c);
  printf("|%+50d|\n", c);

  //************%c et '+' et '-' et nb**************

  printf("\nTEST %d\n\n", i++);
  ft_printf("|%+-5d|\n", c);
  printf("|%+-5d|\n", c);

  //************%c et mix**************

  printf("\nTEST %d\n\n", i++);
  ft_printf("|%+5-d|\n", c);
  printf("|%+5-d|\n", c);

  printf("\nTEST %d\n\n", i++);
  ft_printf("|%+-#0 10d|\n", c);
  printf("|%+-#0 10d|\n", c);
  
  printf("*****************%%d**********************\n");
  int d = 1000;
  
    //************%d et '0' et nb**************
    i = 0;

  //0
  printf("\nTEST %d\n\n", i++);
  printf("|%0d|\n",d);
  ft_printf("|%0d|\n",d);

  //1
  printf("\nTEST %d\n\n", i++);
  printf("|%01d|\n",d);
  ft_printf("|%01d|\n",d);

  //2
  printf("\nTEST %d\n\n", i++);
  printf("|%08d|\n",d);
  ft_printf("|%08d|\n",d);

  //3
  printf("\nTEST %d\n\n", i++);
  printf("|%0  -8d|\n",d);
  ft_printf("|%0  -8d|\n",d);

  //4
  printf("\nTEST %d\n\n", i++);
  printf("|%0  +-8d|\n",d);
  ft_printf("|%0  +-8d|\n",d);
  
  // printf("# int d = %d, %#8d\n",d, d);

  //5
  printf("\nTEST %d\n\n", i++);
  printf("|% 4d|\n",d);
  ft_printf("|% 4d|\n",d);

  //6
  printf("\nTEST %d\n\n", i++);
  printf("|% 5d|\n",d);
  ft_printf("|% 5d|\n",d);

  //************%d et '0' et ' ' et '-'**************

  //7
  printf("\nTEST %d\n\n", i++);
  printf("|% -0d|\n",d);
  ft_printf("|% -0d|\n",d);

  //************%d et '0' et ' ' et '-' et '+'**************

  //8
  printf("\nTEST %d\n\n", i++);
  printf("|% +-0d|\n",d);
  ft_printf("|% +-0d|\n",d);

  //9
  printf("\nTEST %d\n\n", i++);
  printf("|% 20d|\n", d);
  ft_printf("|% 20d|\n", d);

  //10
  printf("\nTEST %d\n\n", i++);
  printf("|%+d|\n", d);
  ft_printf("|%+d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%+20d|\n", d);
  ft_printf("|%+20d|\n", d);

  printf("\nTEST %d\n\n", i++);
  printf("|%20+d|\n", d);
  ft_printf("|%20+d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%-d|\n", d);
  ft_printf("|%-d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%-20d|\n", d);
  ft_printf("|%-20d|\n", d);

  //15
  printf("\nTEST %d\n\n", i++);
  printf("|%-d|\n", d);
  ft_printf("|%-d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%-20d|\n", d);
  ft_printf("|%-20d|\n", d);
  
  
  d = -1000;
  printf("\nTEST %d\n\n", i++);
  printf("|%0d|\n", d);
  ft_printf("|%0d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%#d|\n", d);
  ft_printf("|%#d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|% d|\n", d);
  ft_printf("|% d|\n", d);

  //20
  printf("\nTEST %d\n\n", i++);
  printf("|%+d|\n", d);
  ft_printf("|%+d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%-d|\n", d);
  ft_printf("|%-d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%010d|\n", d);
  ft_printf("|%010d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%#10d|\n", d);
  ft_printf("|%#10d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|% 10d|\n", d);
  ft_printf("|% 10d|\n", d);

  //25
  printf("\nTEST %d\n\n", i++);
  printf("|%+10d|\n", d);
  ft_printf("|%+10d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%-10d|\n", d);
  ft_printf("|%-10d|\n", d);
  printf("\n");
  
    //************%d et '0' et nb**************

  // printf("  retour : %d   ",printf("0 int d = %d, %qq u",d));
  
  printf("\nTEST %d\n\n", i++);
  printf("|%0d|\n",d);
  ft_printf("|%0d|\n",d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%01d|\n",d);
  ft_printf("|%01d|\n",d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%08d|\n",d);
  ft_printf("|%08d|\n",d);

    //************%d et '0' et ' ' et '-' et nb**************
  
  //30
  printf("\nTEST 30%d\n\n", i++);
  printf("|%0  -8d|\n",d);
  ft_printf("|%0  -8d|\n",d);
  
    //************%d et '0' et ' ' et '-' et '+' et nb**************
  
  printf("\nTEST 31%d\n\n", i++);
  printf("|%0  +-8d|\n",d);
  ft_printf("|%0  +-8d|\n",d);
  
  // printf("# int d = %d, %#8d\n",d, d);
    //************%d et '0' et ' ' et nb**************
  
  printf("\nTEST %d\n\n", i++);
  printf("|% 4d|\n",d);
  ft_printf("|% 4d|\n",d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|% 5d|\n",d);
  ft_printf("|% 5d|\n",d);
  
  //************%d et '0' et ' ' et '-'**************
  
  printf("\nTEST %d\n\n", i++);
  printf("|% -0d|\n",d);
  ft_printf("|% -0d|\n",d);
  
  //************%d et '0' et ' ' et '-' et '+'**************
  
  printf("\nTEST %d\n\n", i++);
  printf("|% +-0d|\n",d);
  ft_printf("|% +-0d|\n",d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|% 20d|\n", d);
  ft_printf("|% 20d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%+d|\n", d);
  ft_printf("|%+d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%+20d|\n", d);
  ft_printf("|%+20d|\n", d);

  printf("\nTEST%d\n\n", i++);
  printf("|%20+d|\n", d);
  ft_printf("|%20+d|\n", d);

  printf("\nTEST%d\n\n", i++);
  printf("|%20yd|\n", d);
  ft_printf("|%20yd|\n", d);

  printf("\nTEST%d\n\n", i++);
  printf("|%yd|\n", d);
  ft_printf("|%yd|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%-d|\n", d);
  ft_printf("|%-d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%-20d|\n", d);
  ft_printf("|%-20d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%-d|\n", d);
  ft_printf("|%-d|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%-20d|\n", d);
  ft_printf("|%-20d|\n", d);
  printf("\n\n");
  
//******************%i*************************************************
  
  printf("*****************%%i**********************\n");
  
  d = -1000;
  i = 0;

  //0
  printf("\nTEST %d\n\n", i++); 
  printf("|%0i|\n", d);
  ft_printf("|%0i|\n", d); 
  
  printf("\nTEST %d\n\n", i++); 
  printf("|%01i|\n", d);
  ft_printf("|%01i|\n", d); 
  
  printf("\nTEST %d\n\n", i++); 
  printf("|%02i|\n", d);
  ft_printf("|%02i|\n", d); 
  
  printf("\nTEST %d\n\n", i++); 
  printf("|%03i|\n", d);
  ft_printf("|%03i|\n", d); 
  
  printf("\nTEST %d\n\n", i++); 
  printf("|%04i|\n", d);
  ft_printf("|%04i|\n", d); 

  //5!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  printf("\nTEST %d\n\n", i++); 
  printf("|%05d|\n", d);
  ft_printf("|%05i|\n", d); 
  
  printf("\nTEST %d\n\n", i++); 
  printf("|%06i|\n", d);
  ft_printf("|%06i|\n", d); 
  
  printf("\nTEST %d\n\n", i++);
  printf("|%#i|\n", d);
  ft_printf("|%#i|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|% i|\n", d);
  ft_printf("|% i|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%+i|\n", d);
  ft_printf("|%+i|\n", d);

  //10
  printf("\nTEST %d\n\n", i++);
  printf("|%-i|\n", d);
  ft_printf("|%-i|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%010i|\n", d);
  ft_printf("|%010i|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%#10i|\n", d);
  ft_printf("|%#10i|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|% 10i|\n", d);
  ft_printf("|% 10i|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%+10i|\n", d);
  ft_printf("|%+10i|\n", d);

  //15
  printf("\nTEST %d\n\n", i++);
  printf("|%-10i|\n", d);
  ft_printf("|%-10i|\n", d);
  printf("\n");
  
  d = -1;
  printf("\nTEST %d\n\n", i++);
  printf("|%0i|\n", d);
  ft_printf("|%0i|\n", d); 
  
  printf("\nTEST %d\n\n", i++);
  printf("|%01i|\n", d);
  ft_printf("|%01i|\n", d); 
  
  printf("\nTEST %d\n\n", i++);
  printf("|%02i|\n", d); 
  ft_printf("|%02i|\n", d); 
  
  printf("\nTEST %d\n\n", i++);
  printf("|%03i|\n", d);
  ft_printf("|%03i|\n", d);

  //20
  printf("\nTEST %d\n\n", i++);
  printf("|%#i|\n", d);
  ft_printf("|%#i|\n", d);
  
  printf("\nTEST %d\n\n", i++); //15
  printf("|% i|\n", d);
  ft_printf("|% i|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%+i|\n", d);
  ft_printf("|%+i|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%-i|\n", d);
  ft_printf("|%-i|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%010i|\n", d);
  ft_printf("|%010i|\n", d);

  //25
  printf("\nTEST %d\n\n", i++);
  printf("|%#10i|\n", d);
  ft_printf("|%#10i|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|% 10i|\n", d);
  ft_printf("|% 10i|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%+10i|\n", d);
  ft_printf("|%+10i|\n", d);
  
  printf("\nTEST %d\n\n", i++);
  printf("|%-10i|\n", d);
  ft_printf("|%-10i|\n", d);
  
  printf("\n");
  
  
  d = 1;
  //29!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  
  printf("\nTEST %d\n\n", i++);
   printf("|%0i|\n", d);
  ft_printf("|%0i|\n", d);

  printf("\nTEST %d\n\n", i++);
  printf("|%#i|\n", d);
  ft_printf("|%#i|\n", d);

  printf("\nTEST %d\n\n", i++); 
  printf("|% i|\n", d);
  ft_printf("|% i|\n", d);

  printf("\nTEST %d\n\n", i++);
  printf("|%+i|\n", d);
  ft_printf("|%+i|\n", d);

  printf("\nTEST %d\n\n", i++);
  printf("|%-i|\n", d);
  ft_printf("|%-i|\n", d);

  printf("\nTEST %d\n\n", i++);
  printf("|%010i|\n", d);
  ft_printf("|%010i|\n", d);

  printf("\nTEST %d\n\n", i++);
  printf("|%#10i|\n", d);
  ft_printf("|%#10i|\n", d);

  printf("\nTEST %d\n\n", i++); //30
  printf("|% 10i|\n", d);
  ft_printf("|% 10i|\n", d);

  printf("\nTEST %d\n\n", i++);
  printf("|%+10i|\n", d);
  ft_printf("|%+10i|\n", d);

  printf("\nTEST %d\n\n", i++);
  printf("|%-10i|\n", d);
  ft_printf("|%-10i|\n", d);
  printf("\n\n");

  return (0);
}
