#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int n = 99;
	char *s = "Hello";
	unsigned int u = 2147483;

	printf("	arg : %s    retour : %d\n", "%10c", printf("|%10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10c", ft_printf("|%10c|", n));
	printf("	arg : %s    retour : %d\n", "%10%c", printf("|%10%c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10%c", ft_printf("|%10%c|", n));
	printf("	arg : %s    retour : %d\n", "%10.%c", printf("|%10.%c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.%c", ft_printf("|%10.%c|", n));
	printf("	arg : %s    retour : %d\n", "%.10%c", printf("|%.10%c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.10%c", ft_printf("|%.10%c|", n));

	printf("	arg : %s    retour : %d\n", "%10c", printf("|%10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10c", ft_printf("|%10c|", n));
	printf("	arg : %s    retour : %d\n", "%10%c", printf("|%10%c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10%c", ft_printf("|%10%c|", n));
	printf("	arg : %s    retour : %d\n", "%10.%c", printf("|%10.%c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.%c", ft_printf("|%10.%c|", n));
	printf("	arg : %s    retour : %d\n", "%.10%c", printf("|%.10%c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.10%c", ft_printf("|%.10%c|", n));

	printf("	arg : %s    retour : %d\n", "%10c", printf("|%10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10c", ft_printf("|%10c|", n));
	printf("	arg : %s    retour : %d\n", "%10%c", printf("|%10%c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10%c", ft_printf("|%10%c|", n));
	printf("	arg : %s    retour : %d\n", "%10.%c", printf("|%10.%c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.%c", ft_printf("|%10.%c|", n));
	printf("	arg : %s    retour : %d\n", "%.10%c", printf("|%.10%c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.10%c", ft_printf("|%.10%c|", n));

// TEST arg str ok ou non

	//ft_printf("	arg : %s    retour : %d\n", "%100c", ft_printf("|%100c|", n));
	printf("	arg : %s    retour : %d\n", "%100#c", printf("|%100#c|", n));
	printf("	arg : %s    retour : %d\n", "%100 c", printf("|%100 c|", n));
	printf("	arg : %s    retour : %d\n", "%100+c", printf("|%100+c|", n));
	printf("	arg : %s    retour : %d\n", "%100-c", printf("|%100-c|", n));
	printf("	arg : %s    retour : %d\n", "%100.c", printf("|%100.c|", n));
	printf("	arg : %s    retour : %d\n", "%100.%c", printf("|%100.c|", n));

	printf("	arg : %s    retour : %d\n", "%010c", printf("|%010c|", n));
	printf("	arg : %s    retour : %d\n", "%#100c", printf("|%#100c|", n));
	printf("	arg : %s    retour : %d\n", "% 100c", printf("|% 100c|", n));
	printf("	arg : %s    retour : %d\n", "%+100c", printf("|%+100c|", n));
	printf("	arg : %s    retour : %d\n", "%-100c", printf("|%-100c|", n));
	printf("	arg : %s    retour : %d\n", "%.100c", printf("|%.100c|", n));

	printf("	arg : %s    retour : %d\n", "%.010c", printf("|%.010c|", n));
	printf("	arg : %s    retour : %d\n", "%.#100c", printf("|%.#10c|", n));
	printf("	arg : %s    retour : %d\n", "%. 100c", printf("|%. 10c|", n));
	printf("	arg : %s    retour : %d\n", "%.+100c", printf("|%.+10c|", n));
	printf("	arg : %s    retour : %d\n", "%.-100c", printf("|%.-10c|", n));
	printf("	arg : %s    retour : %d\n", "%..100c", printf("|%..10c|", n));

// 	// TEST FLAG . avec !nb  et nb 1 a 6, int max et intmax + 1

// ft_printf("\n\ncpsdiuxX flag number de 10 \n\n"); //TESTS OK

// 	printf("	arg : %s    retour : %d\n", "%10c", printf("|%10c|", n));
// 	printf("	arg : %s    retour : %d\n", "%10p", printf("|%10p|", s));
// 	printf("	arg : %s    retour : %d\n", "%10s", printf("|%10s|", s));
// 	printf("	arg : %s    retour : %d\n", "%10d", printf("|%10d|", n));
// 	printf("	arg : %s    retour : %d\n", "%10i", printf("|%10i|", n));
// 	printf("	arg : %s    retour : %d\n", "%10u", printf("|%10u|", u));
// 	printf("	arg : %s    retour : %d\n", "%10x", printf("|%10x|", n));
// 	printf("	arg : %s    retour : %d\n", "%10X", printf("|%10X|", n));
	
// 	printf("\n");

// ft_printf("\n\ncpsdiuxX avec flag . et precision de 10\n\n"); //TESTS OK

// 	printf("	arg : %s    retour : %d\n", "%.10c", printf("|%.10c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.10p", printf("|%.10p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.10s", printf("|%.10s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.10d", printf("|%.10d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.10i", printf("|%.10i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.10u", printf("|%.10u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.10x", printf("|%.10x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.10X", printf("|%.10X|", n));
	
// 	printf("\n");

// ft_printf("\n\ncpsdiuxX avec flag number de 10 flag . \n\n"); //TESTS OK

// 	printf("	arg : %s    retour : %d\n", "%10.c", printf("|%10.c|", n));
// 	printf("	arg : %s    retour : %d\n", "%10.p", printf("|%10.p|", s));
// 	printf("	arg : %s    retour : %d\n", "%10.s", printf("|%10.s|", s));
// 	printf("	arg : %s    retour : %d\n", "%10.d", printf("|%10.d|", n));
// 	printf("	arg : %s    retour : %d\n", "%10.i", printf("|%10.i|", n));
// 	printf("	arg : %s    retour : %d\n", "%10.u", printf("|%10.u|", u));
// 	printf("	arg : %s    retour : %d\n", "%10.x", printf("|%10.x|", n));
// 	printf("	arg : %s    retour : %d\n", "%10.X", printf("|%10.X|", n));
	
// 	printf("\n");

// ft_printf("\n\ncpsdiuxX avec 10.20 \n\n"); //TESTS OK

// 	printf("	arg : %s    retour : %d\n", "%10.20c", printf("|%10.20c|", n));
// 	printf("	arg : %s    retour : %d\n", "%10.20p", printf("|%10.20p|", s));
// 	printf("	arg : %s    retour : %d\n", "%10.20s", printf("|%10.20s|", s));
// 	printf("	arg : %s    retour : %d\n", "%10.20d", printf("|%10.20d|", n));
// 	printf("	arg : %s    retour : %d\n", "%10.20i", printf("|%10.20i|", n));
// 	printf("	arg : %s    retour : %d\n", "%10.20u", printf("|%10.20u|", u));
// 	printf("	arg : %s    retour : %d\n", "%10.20x", printf("|%10.20x|", n));
// 	printf("	arg : %s    retour : %d\n", "%10.20X", printf("|%10.20X|", n));

// 	printf("\n");

// ft_printf("\n\ncpsdiuxX avec 10.1 \n\n"); //TESTS OK

// 	printf("	arg : %s    retour : %d\n", "%10.1c", printf("|%10.1c|", n));
// 	printf("	arg : %s    retour : %d\n", "%10.1p", printf("|%10.1p|", s));
// 	printf("	arg : %s    retour : %d\n", "%10.1s", printf("|%10.1s|", s));
// 	printf("	arg : %s    retour : %d\n", "%10.1d", printf("|%10.1d|", n));
// 	printf("	arg : %s    retour : %d\n", "%10.1i", printf("|%10.1i|", n));
// 	printf("	arg : %s    retour : %d\n", "%10.1u", printf("|%10.1u|", u));
// 	printf("	arg : %s    retour : %d\n", "%10.1x", printf("|%10.1x|", n));
// 	printf("	arg : %s    retour : %d\n", "%10.1X", printf("|%10.1X|", n));

// 	printf("\n");

// ft_printf("\n\ncpsdiuxX avec 20.10 \n\n"); //TESTS OK

// 	printf("	arg : %s    retour : %d\n", "%20.10c", printf("|%20.10c|", n));
// 	printf("	arg : %s    retour : %d\n", "%20.10p", printf("|%20.10p|", s));
// 	printf("	arg : %s    retour : %d\n", "%20.10s", printf("|%20.10s|", s));
// 	printf("	arg : %s    retour : %d\n", "%20.10d", printf("|%20.10d|", n));
// 	printf("	arg : %s    retour : %d\n", "%20.10i", printf("|%20.10i|", n));
// 	printf("	arg : %s    retour : %d\n", "%20.10u", printf("|%20.10u|", u));
// 	printf("	arg : %s    retour : %d\n", "%20.10x", printf("|%20.10x|", n));
// 	printf("	arg : %s    retour : %d\n", "%20.10X", printf("|%20.10X|", n));

// 	printf("\n\n\n");



// //pas de precision apres .

// printf("\n\ncpsdiuxX avec flag . uniquement \n\n"); //TESTS OK

// 	printf("	arg : %s    retour : %d\n", "%.c", printf("|%.c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.p", printf("|%.p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.s", printf("|%.s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.d", printf("|%.d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.i", printf("|%.i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.u", printf("|%.u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.x", printf("|%.x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.X", printf("|%.X|", n));

// //%c	
// printf("\n\n%%c avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .c", printf("|% .c|", n));
// 	printf("	arg : %s    retour : %d\n", "%. c", printf("|%. c|", n));
// 	printf("	arg : %s    retour : %d\n", "%+.c", printf("|%+.c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+c", printf("|%.+c|", n));
// 	printf("	arg : %s    retour : %d\n", "%-.c", printf("|%-.c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-c", printf("|%.-c|", n));
// 	printf("	arg : %s    retour : %d\n", "%#.c", printf("|%#.c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#c", printf("|%.#c|", n));
// 	printf("	arg : %s    retour : %d\n", "%0.c", printf("|%0.c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.0c", printf("|%.0c|", n));

// //%p
// printf("\n\n%%p avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .p", printf("|% .p|", s));
// 	printf("	arg : %s    retour : %d\n", "%. p", printf("|%. p|", s));
// 	printf("	arg : %s    retour : %d\n", "%+.p", printf("|%+.p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.+p", printf("|%.+p|", s));
// 	printf("	arg : %s    retour : %d\n", "%-.p", printf("|%-.p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.-p", printf("|%.-p|", s));
// 	printf("	arg : %s    retour : %d\n", "%#.p", printf("|%#.p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.#p", printf("|%.#p|", s));
// 	printf("	arg : %s    retour : %d\n", "%0.p", printf("|%0.p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.0p", printf("|%.0p|", s));

// //%s
// printf("\n\n%%s avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .s", printf("|% .s|", s));
// 	printf("	arg : %s    retour : %d\n", "%. s", printf("|%. s|", s));
// 	printf("	arg : %s    retour : %d\n", "%+.s", printf("|%+.s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.+s", printf("|%.+s|", s));
// 	printf("	arg : %s    retour : %d\n", "%-.s", printf("|%-.s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.-s", printf("|%.-s|", s));
// 	printf("	arg : %s    retour : %d\n", "%#.s", printf("|%#.s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.#s", printf("|%.#s|", s));
// 	printf("	arg : %s    retour : %d\n", "%0.s", printf("|%0.s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.0s", printf("|%.0s|", s));

// //%d
// printf("\n\n%%d avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .d", printf("|% .d|", n));
// 	printf("	arg : %s    retour : %d\n", "%. d", printf("|%. d|", n));
// 	printf("	arg : %s    retour : %d\n", "%+.d", printf("|%+.d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+d", printf("|%.+d|", n));
// 	printf("	arg : %s    retour : %d\n", "%-.d", printf("|%-.d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-d", printf("|%.-d|", n));
// 	printf("	arg : %s    retour : %d\n", "%#.d", printf("|%#.d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#d", printf("|%.#d|", n));
// 	printf("	arg : %s    retour : %d\n", "%0.d", printf("|%0.d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.0d", printf("|%.0d|", n));

// //%i
// printf("\n\n%%i avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .i", printf("|% .i|", n));
// 	printf("	arg : %s    retour : %d\n", "%. i", printf("|%. i|", n));
// 	printf("	arg : %s    retour : %d\n", "%+.i", printf("|%+.i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+i", printf("|%.+i|", n));
// 	printf("	arg : %s    retour : %d\n", "%-.i", printf("|%-.i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-i", printf("|%.-i|", n));
// 	printf("	arg : %s    retour : %d\n", "%#.i", printf("|%#.i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#i", printf("|%.#i|", n));
// 	printf("	arg : %s    retour : %d\n", "%0.i", printf("|%0.i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.0i", printf("|%.0i|", n));

// //%u
// printf("\n\n%%u avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .u", printf("|% .u|", u));
// 	printf("	arg : %s    retour : %d\n", "%. u", printf("|%. u|", u));
// 	printf("	arg : %s    retour : %d\n", "%+.u", printf("|%+.u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.+u", printf("|%.+u|", u));
// 	printf("	arg : %s    retour : %d\n", "%-.u", printf("|%-.u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.-u", printf("|%.-u|", u));
// 	printf("	arg : %s    retour : %d\n", "%#.u", printf("|%#.u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.#u", printf("|%.#u|", u));
// 	printf("	arg : %s    retour : %d\n", "%0.u", printf("|%0.u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.0u", printf("|%.0u|", u));

// //%x
// printf("\n\n%%x avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .x", printf("|% .x|", n));
// 	printf("	arg : %s    retour : %d\n", "%. x", printf("|%. x|", n));
// 	printf("	arg : %s    retour : %d\n", "%+.x", printf("|%+.x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+x", printf("|%.+x|", n));
// 	printf("	arg : %s    retour : %d\n", "%-.x", printf("|%-.x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-x", printf("|%.-x|", n));
// 	printf("	arg : %s    retour : %d\n", "%#.x", printf("|%#.x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#x", printf("|%.#x|", n));
// 	printf("	arg : %s    retour : %d\n", "%0.x", printf("|%0.x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.0x", printf("|%.0x|", n));

// // %X
// printf("\n\n%%X avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .X", printf("|% .X|", n));
// 	printf("	arg : %s    retour : %d\n", "%. X", printf("|%. X|", n));
// 	printf("	arg : %s    retour : %d\n", "%+.X", printf("|%+.X|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+X", printf("|%.+X|", n));
// 	printf("	arg : %s    retour : %d\n", "%-.X", printf("|%-.X|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-X", printf("|%.-X|", n));
// 	printf("	arg : %s    retour : %d\n", "%#.X", printf("|%#.X|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#X", printf("|%.#X|", n));
// 	printf("	arg : %s    retour : %d\n", "%0.X", printf("|%0.X|", n));
// 	printf("	arg : %s    retour : %d\n", "%.0X", printf("|%.0X|", n));
// //
// //
// //
// //
// //precision de 1 apres .
// //
// //
// //
// //
// printf("\n\ncpsdiuxX avec flag . et precision de 1 ''apres .''\n\n");

// 	printf("	arg : %s    retour : %d\n", "%.1c", printf("|%.1c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.1p", printf("|%.1p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.1s", printf("|%.1s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.1d", printf("|%.1d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.1i", printf("|%.1i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.1u", printf("|%.1u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.1x", printf("|%.1x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.1X", printf("|%.1X|", n));
	
// 	printf("\n\n\n");

// printf("\n\ncpsdiuxX avec flag . et precision de 1 ''avant .''\n\n");

// 	printf("	arg : %s    retour : %d\n", "%1.c", printf("|%1.c|", n));
// 	printf("	arg : %s    retour : %d\n", "%1.p", printf("|%1.p|", s));
// 	printf("	arg : %s    retour : %d\n", "%1.s", printf("|%1.s|", s));
// 	printf("	arg : %s    retour : %d\n", "%1.d", printf("|%1.d|", n));
// 	printf("	arg : %s    retour : %d\n", "%1.i", printf("|%1.i|", n));
// 	printf("	arg : %s    retour : %d\n", "%1.u", printf("|%1.u|", u));
// 	printf("	arg : %s    retour : %d\n", "%1.x", printf("|%1.x|", n));
// 	printf("	arg : %s    retour : %d\n", "%1.X", printf("|%1.X|", n));
	
// 	printf("\n\n\n");

// //%c	
// printf("\n\n%%c avec flag  et precision de 1 ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb). flag precision\n\n");


// 	printf("	arg : %s    retour : %d\n", "% .1c", printf("|% .1c|", n));
// 	printf("	arg : %s    retour : %d\n", "%. 1c", printf("|%. 1c|", n));
// 	printf("	arg : %s    retour : %d\n", "%+.1c", printf("|%+.1c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+1c", printf("|%.+1c|", n));
// 	printf("	arg : %s    retour : %d\n", "%-.1c", printf("|%-.1c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-1c", printf("|%.-1c|", n));
// 	printf("	arg : %s    retour : %d\n", "%#.1c", printf("|%#.1c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#1c", printf("|%.#1c|", n));
// 	printf("	arg : %s    retour : %d\n", "%0.1c", printf("|%0.1c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.01c", printf("|%.01c|", n));

// //%p
// printf("\n\n%%p avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("\n%%p avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb). flag precision\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .1p", printf("|% .1p|", s));
// 	printf("	arg : %s    retour : %d\n", "%. 1p", printf("|%. 1p|", s));
// 	printf("	arg : %s    retour : %d\n", "%+.1p", printf("|%+.1p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.+1p", printf("|%.+1p|", s));
// 	printf("	arg : %s    retour : %d\n", "%-.1p", printf("|%-.1p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.-1p", printf("|%.-1p|", s));
// 	printf("	arg : %s    retour : %d\n", "%#.1p", printf("|%#.1p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.#1p", printf("|%.#1p|", s));
// 	printf("	arg : %s    retour : %d\n", "%0.1p", printf("|%0.1p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.01p", printf("|%.01p|", s));

// // printf("\n\n%%p avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// // printf("a) flag . precision\nb). flag precision\n\n");

// // 	printf("	arg : %s    retour : %d\n", "% .2p", printf("|% .2p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%. 2p", printf("|%. 2p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%+.2p", printf("|%+.2p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%.+2p", printf("|%.+2p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%-.2p", printf("|%-.2p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%.-2p", printf("|%.-2p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%#.2p", printf("|%#.2p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%.#2p", printf("|%.#2p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%0.2p", printf("|%0.2p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%.02p", printf("|%.02p|", s));

// // printf("\n\n%%p avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// // printf("a) flag . precision\nb). flag precision\n\n");

// // 	printf("	arg : %s    retour : %d\n", "% .3p", printf("|% .3p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%. 3p", printf("|%. 3p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%+.3p", printf("|%+.3p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%.+3p", printf("|%.+3p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%-.3p", printf("|%-.3p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%.-3p", printf("|%.-3p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%#.3p", printf("|%#.3p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%.#3p", printf("|%.#3p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%0.3p", printf("|%0.3p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%.03p", printf("|%.03p|", s));

// // printf("\n\n%%p avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// // printf("a) flag . precision\nb). flag precision\n\n");

// // 	printf("	arg : %s    retour : %d\n", "% .4p", printf("|% .4p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%. 4p", printf("|%. 4p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%+.4p", printf("|%+.4p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%.+4p", printf("|%.+4p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%-.4p", printf("|%-.4p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%.-4p", printf("|%.-4p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%#.4p", printf("|%#.4p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%.#4p", printf("|%.#4p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%0.4p", printf("|%0.4p|", s));
// // 	printf("	arg : %s    retour : %d\n", "%.04p", printf("|%.04p|", s));

// //%s
// printf("\n\n%%s avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb). flag precision\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .1s", printf("|% .1s|", s));
// 	printf("	arg : %s    retour : %d\n", "%. 1s", printf("|%. 1s|", s));
// 	printf("	arg : %s    retour : %d\n", "%+.1s", printf("|%+.1s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.+1s", printf("|%.+1s|", s));
// 	printf("	arg : %s    retour : %d\n", "%-.1s", printf("|%-.1s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.-1s", printf("|%.-1s|", s));
// 	printf("	arg : %s    retour : %d\n", "%#.1s", printf("|%#.1s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.#1s", printf("|%.#1s|", s));
// 	printf("	arg : %s    retour : %d\n", "%0.1s", printf("|%0.1s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.01s", printf("|%.01s|", s));

// //%d
// printf("\n\n%%d avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb). flag precision\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .1d", printf("|% .1d|", n));
// 	printf("	arg : %s    retour : %d\n", "%. 1d", printf("|%. 1d|", n));
// 	printf("	arg : %s    retour : %d\n", "%+.1d", printf("|%+.1d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+1d", printf("|%.+1d|", n));
// 	printf("	arg : %s    retour : %d\n", "%-.1d", printf("|%-.1d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-1d", printf("|%.-1d|", n));
// 	printf("	arg : %s    retour : %d\n", "%#.1d", printf("|%#.1d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#1d", printf("|%.#1d|", n));
// 	printf("	arg : %s    retour : %d\n", "%0.1d", printf("|%0.1d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.01d", printf("|%.01d|", n));

// printf("\n\n%%d avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb). flag precision\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .2d", printf("|% .2d|", n));
// 	printf("	arg : %s    retour : %d\n", "%. 2d", printf("|%. 2d|", n));
// 	printf("	arg : %s    retour : %d\n", "%+.2d", printf("|%+.2d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+2d", printf("|%.+2d|", n));
// 	printf("	arg : %s    retour : %d\n", "%-.2d", printf("|%-.2d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-2d", printf("|%.-2d|", n));
// 	printf("	arg : %s    retour : %d\n", "%#.2d", printf("|%#.2d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#2d", printf("|%.#2d|", n));
// 	printf("	arg : %s    retour : %d\n", "%0.2d", printf("|%0.2d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.02d", printf("|%.02d|", n));

// printf("\n\n%%d avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb). flag precision\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .3d", printf("|% .3d|", n));
// 	printf("	arg : %s    retour : %d\n", "%. 3d", printf("|%. 3d|", n));
// 	printf("	arg : %s    retour : %d\n", "%+.3d", printf("|%+.3d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+3d", printf("|%.+3d|", n));
// 	printf("	arg : %s    retour : %d\n", "%-.3d", printf("|%-.3d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-3d", printf("|%.-3d|", n));
// 	printf("	arg : %s    retour : %d\n", "%#.3d", printf("|%#.3d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#3d", printf("|%.#3d|", n));
// 	printf("	arg : %s    retour : %d\n", "%0.3d", printf("|%0.3d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.03d", printf("|%.03d|", n));

// printf("\n\n%%d avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb). flag precision\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .4d", printf("|% .4d|", n));
// 	printf("	arg : %s    retour : %d\n", "%. 4d", printf("|%. 4d|", n));
// 	printf("	arg : %s    retour : %d\n", "%+.4d", printf("|%+.4d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+4d", printf("|%.+4d|", n));
// 	printf("	arg : %s    retour : %d\n", "%-.4d", printf("|%-.4d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-4d", printf("|%.-4d|", n));
// 	printf("	arg : %s    retour : %d\n", "%#.4d", printf("|%#.4d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#4d", printf("|%.#4d|", n));
// 	printf("	arg : %s    retour : %d\n", "%0.4d", printf("|%0.4d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.04d", printf("|%.04d|", n));

// //%i
// printf("\n\n%%i avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");
// printf("a) flag . precision\nb). flag precision\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .1i", printf("|% .1i|", n));
// 	printf("	arg : %s    retour : %d\n", "%. 1i", printf("|%. 1i|", n));
// 	printf("	arg : %s    retour : %d\n", "%+.1i", printf("|%+.1i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+1i", printf("|%.+1i|", n));
// 	printf("	arg : %s    retour : %d\n", "%-.1i", printf("|%-.1i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-1i", printf("|%.-1i|", n));
// 	printf("	arg : %s    retour : %d\n", "%#.1i", printf("|%#.1i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#1i", printf("|%.#1i|", n));
// 	printf("	arg : %s    retour : %d\n", "%0.1i", printf("|%0.1i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.01i", printf("|%.01i|", n));

// //%u
// printf("\n\n%%u avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb). flag precision\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .1u", printf("|% .1u|", u));
// 	printf("	arg : %s    retour : %d\n", "%. 1u", printf("|%. 1u|", u));
// 	printf("	arg : %s    retour : %d\n", "%+.1u", printf("|%+.1u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.+1u", printf("|%.+1u|", u));
// 	printf("	arg : %s    retour : %d\n", "%-.1u", printf("|%-.1u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.-1u", printf("|%.-1u|", u));
// 	printf("	arg : %s    retour : %d\n", "%#.1u", printf("|%#.1u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.#1u", printf("|%.#1u|", u));
// 	printf("	arg : %s    retour : %d\n", "%0.1u", printf("|%0.1u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.01u", printf("|%.01u|", u));

// //%x
// printf("\n\n%%x avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb). flag precision\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .1x", printf("|% .1x|", n));
// 	printf("	arg : %s    retour : %d\n", "%. 1x", printf("|%. 1x|", n));
// 	printf("	arg : %s    retour : %d\n", "%+.1x", printf("|%+.1x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+1x", printf("|%.+1x|", n));
// 	printf("	arg : %s    retour : %d\n", "%-.1x", printf("|%-.1x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-1x", printf("|%.-1x|", n));
// 	printf("	arg : %s    retour : %d\n", "%#.1x", printf("|%#.1x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#1x", printf("|%.#1x|", n));
// 	printf("	arg : %s    retour : %d\n", "%0.1x", printf("|%0.1x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.01x", printf("|%.01x|", n));

// // %X
// printf("\n\n%%X avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb). flag precision\n\n");

// 	printf("	arg : %s    retour : %d\n", "% .1X", printf("|% .1X|", n));
// 	printf("	arg : %s    retour : %d\n", "%. 1X", printf("|%. 1X|", n));
// 	printf("	arg : %s    retour : %d\n", "%+.1X", printf("|%+.1X|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+1X", printf("|%.+1X|", n));
// 	printf("	arg : %s    retour : %d\n", "%-.1X", printf("|%-.1X|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-1X", printf("|%.-1X|", n));
// 	printf("	arg : %s    retour : %d\n", "%#.1X", printf("|%#.1X|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#1X", printf("|%.#1X|", n));
// 	printf("	arg : %s    retour : %d\n", "%0.1X", printf("|%0.1X|", n));
// 	printf("	arg : %s    retour : %d\n", "%.01X", printf("|%.01X|", n));
// //
// //
// //
// //
// //precision de 10 apres .
// //
// //
// //
// //


// //%c	
// printf("\n\n%%c avec flag  et precision de 10 ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


// 	printf("	arg : %s    retour : %d\n\n", "%20.10c", printf("|%20.10c|", n));

// 	printf("	arg : %s    retour : %d\n", "% .10c", printf("|% .10c|", n));
// 	printf("	arg : %s    retour : %d\n", "% 10.c", printf("|% 10.c|", n));
// 	printf("	arg : %s    retour : %d\n", "% 20.10c", printf("|% 20.10c|", n));
// 	printf("	arg : %s    retour : %d\n", "%. 10c", printf("|%. 10c|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%+.10c", printf("|%+.10c|", n));
// 	printf("	arg : %s    retour : %d\n", "%+10.c", printf("|%+10.c|", n));
// 	printf("	arg : %s    retour : %d\n", "%+20.10c", printf("|%+20.10c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+10c", printf("|%.+10c|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%-.10c", printf("|%-.10c|", n));
// 	printf("	arg : %s    retour : %d\n", "%-10.c", printf("|%-10.c|", n));
// 	printf("	arg : %s    retour : %d\n", "%-20.10c", printf("|%-20.10c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-10c", printf("|%.-10c|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%#.10c", printf("|%#.10c|", n));
// 	printf("	arg : %s    retour : %d\n", "%#10.c", printf("|%#10.c|", n));
// 	printf("	arg : %s    retour : %d\n", "%#20.10c", printf("|%#20.10c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#10c", printf("|%.#10c|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%0.10c", printf("|%0.10c|", n));
// 	printf("	arg : %s    retour : %d\n", "%010.c", printf("|%010.c|", n));
// 	printf("	arg : %s    retour : %d\n", "%020.10c", printf("|%020.10c|", n));
// 	printf("	arg : %s    retour : %d\n", "%.010c", printf("|%.010c|", n));

// //%p
// printf("\n\n%%p avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


// 	printf("	arg : %s    retour : %d\n\n", "%20.10p", printf("|%20.10p|", s));
	
// 	printf("	arg : %s    retour : %d\n", "% .10p", printf("|% .10p|", s));
// 	printf("	arg : %s    retour : %d\n", "% 10.p", printf("|% 10.p|", s));
// 	printf("	arg : %s    retour : %d\n", "% 20.10p", printf("|% 20.10p|", s));
// 	printf("	arg : %s    retour : %d\n", "%. 10p", printf("|%. 10p|", s));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%+.10p", printf("|%+.10p|", s));
// 	printf("	arg : %s    retour : %d\n", "%+10.p", printf("|%+10.p|", s));
// 	printf("	arg : %s    retour : %d\n", "%+20.10p", printf("|%+20.10p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.+10p", printf("|%.+10p|", s));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%-.10p", printf("|%-.10p|", s));
// 	printf("	arg : %s    retour : %d\n", "%-10.p", printf("|%-10.p|", s));
// 	printf("	arg : %s    retour : %d\n", "%-20.10p", printf("|%-20.10p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.-10p", printf("|%.-10p|", s));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%#.10p", printf("|%#.10p|", s));
// 	printf("	arg : %s    retour : %d\n", "%#10.p", printf("|%#10.p|", s));
// 	printf("	arg : %s    retour : %d\n", "%#20.10p", printf("|%#20.10p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.#10p", printf("|%.#10p|", s));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%0.10p", printf("|%0.10p|", s));
// 	printf("	arg : %s    retour : %d\n", "%010.p", printf("|%010.p|", s));
// 	printf("	arg : %s    retour : %d\n", "%020.10p", printf("|%020.10p|", s));
// 	printf("	arg : %s    retour : %d\n", "%.010p", printf("|%.010p|", s));

// //%s
// printf("\n\n%%s avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


// 	printf("	arg : %s    retour : %d\n\n", "%20.10s", printf("|%20.10s|", s));
	
// 	printf("	arg : %s    retour : %d\n", "% .10s", printf("|% .10s|", s));
// 	printf("	arg : %s    retour : %d\n", "% 10.s", printf("|% 10.s|", s));
// 	printf("	arg : %s    retour : %d\n", "% 20.10s", printf("|% 20.10s|", s));
// 	printf("	arg : %s    retour : %d\n", "%. 10s", printf("|%. 10s|", s));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%+.10s", printf("|%+.10s|", s));
// 	printf("	arg : %s    retour : %d\n", "%+10.s", printf("|%+10.s|", s));
// 	printf("	arg : %s    retour : %d\n", "%+20.10s", printf("|%+20.10s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.+10s", printf("|%.+10s|", s));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%-.10s", printf("|%-.10s|", s));
// 	printf("	arg : %s    retour : %d\n", "%-10.s", printf("|%-10.s|", s));
// 	printf("	arg : %s    retour : %d\n", "%-20.10s", printf("|%-20.10s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.-10s", printf("|%.-10s|", s));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%#.10s", printf("|%#.10s|", s));
// 	printf("	arg : %s    retour : %d\n", "%#10.s", printf("|%#10.s|", s));
// 	printf("	arg : %s    retour : %d\n", "%#20.10s", printf("|%#20.10s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.#10s", printf("|%.#10s|", s));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%0.10s", printf("|%0.10s|", s));
// 	printf("	arg : %s    retour : %d\n", "%010.s", printf("|%010.s|", s));
// 	printf("	arg : %s    retour : %d\n", "%020.10s", printf("|%020.10s|", s));
// 	printf("	arg : %s    retour : %d\n", "%.010s", printf("|%.010s|", s));

// //%d
// printf("\n\n%%d avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


// 	printf("	arg : %s    retour : %d\n\n", "%20.10d", printf("|%20.10d|", n));
	
// 	printf("	arg : %s    retour : %d\n", "% .10d", printf("|% .10d|", n));
// 	printf("	arg : %s    retour : %d\n", "% 10.d", printf("|% 10.d|", n));
// 	printf("	arg : %s    retour : %d\n", "% 20.10d", printf("|% 20.10d|", n));
// 	printf("	arg : %s    retour : %d\n", "%. 10d", printf("|%. 10d|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%+.10d", printf("|%+.10d|", n));
// 	printf("	arg : %s    retour : %d\n", "%+10.d", printf("|%+10.d|", n));
// 	printf("	arg : %s    retour : %d\n", "%+20.10d", printf("|%+20.10d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+10d", printf("|%.+10d|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%-.10d", printf("|%-.10d|", n));
// 	printf("	arg : %s    retour : %d\n", "%-10.d", printf("|%-10.d|", n));
// 	printf("	arg : %s    retour : %d\n", "%-20.10d", printf("|%-20.10d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-10d", printf("|%.-10d|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%#.10d", printf("|%#.10d|", n));
// 	printf("	arg : %s    retour : %d\n", "%#10.d", printf("|%#10.d|", n));
// 	printf("	arg : %s    retour : %d\n", "%#20.10d", printf("|%#20.10d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#10d", printf("|%.#10d|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%0.10d", printf("|%0.10d|", n));
// 	printf("	arg : %s    retour : %d\n", "%010.d", printf("|%010.d|", n));
// 	printf("	arg : %s    retour : %d\n", "%020.10d", printf("|%020.10d|", n));
// 	printf("	arg : %s    retour : %d\n", "%.010d", printf("|%.010d|", n));

// //%i
// printf("\n\n%%i avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");
// printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


// 	printf("	arg : %s    retour : %d\n\n", "%20.10i", printf("|%20.10i|", n));
	
// 	printf("	arg : %s    retour : %d\n", "% .10i", printf("|% .10i|", n));
// 	printf("	arg : %s    retour : %d\n", "% 10.i", printf("|% 10.i|", n));
// 	printf("	arg : %s    retour : %d\n", "% 20.10i", printf("|% 20.10i|", n));
// 	printf("	arg : %s    retour : %d\n", "%. 10i", printf("|%. 10i|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%+.10i", printf("|%+.10i|", n));
// 	printf("	arg : %s    retour : %d\n", "%+10.i", printf("|%+10.i|", n));
// 	printf("	arg : %s    retour : %d\n", "%+20.10i", printf("|%+20.10i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+10i", printf("|%.+10i|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%-.10i", printf("|%-.10i|", n));
// 	printf("	arg : %s    retour : %d\n", "%-10.i", printf("|%-10.i|", n));
// 	printf("	arg : %s    retour : %d\n", "%-20.10i", printf("|%-20.10i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-10i", printf("|%.-10i|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%#.10i", printf("|%#.10i|", n));
// 	printf("	arg : %s    retour : %d\n", "%#10.i", printf("|%#10.i|", n));
// 	printf("	arg : %s    retour : %d\n", "%#20.10i", printf("|%#20.10i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#10i", printf("|%.#10i|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%0.10i", printf("|%0.10i|", n));
// 	printf("	arg : %s    retour : %d\n", "%010.i", printf("|%010.i|", n));
// 	printf("	arg : %s    retour : %d\n", "%020.10i", printf("|%020.10i|", n));
// 	printf("	arg : %s    retour : %d\n", "%.010i", printf("|%.010i|", n));

// //%u
// printf("\n\n%%u avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


// 	printf("	arg : %s    retour : %d\n\n", "%20.10u", printf("|%20.10u|", u));
	
// 	printf("	arg : %s    retour : %d\n", "% .10u", printf("|% .10u|", u));
// 	printf("	arg : %s    retour : %d\n", "% 10.u", printf("|% 10.u|", u));
// 	printf("	arg : %s    retour : %d\n", "% 20.10u", printf("|% 20.10u|", u));
// 	printf("	arg : %s    retour : %d\n", "%. 10u", printf("|%. 10u|", u));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%+.10u", printf("|%+.10u|", u));
// 	printf("	arg : %s    retour : %d\n", "%+10.u", printf("|%+10.u|", u));
// 	printf("	arg : %s    retour : %d\n", "%+20.10u", printf("|%+20.10u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.+10u", printf("|%.+10u|", u));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%-.10u", printf("|%-.10u|", u));
// 	printf("	arg : %s    retour : %d\n", "%-10.u", printf("|%-10.u|", u));
// 	printf("	arg : %s    retour : %d\n", "%-20.10u", printf("|%-20.10u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.-10u", printf("|%.-10u|", u));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%#.10u", printf("|%#.10u|", u));
// 	printf("	arg : %s    retour : %d\n", "%#10.u", printf("|%#10.u|", u));
// 	printf("	arg : %s    retour : %d\n", "%#20.10u", printf("|%#20.10u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.#10u", printf("|%.#10u|", u));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%0.10u", printf("|%0.10u|", u));
// 	printf("	arg : %s    retour : %d\n", "%010.u", printf("|%010.u|", u));
// 	printf("	arg : %s    retour : %d\n", "%020.10u", printf("|%020.10u|", u));
// 	printf("	arg : %s    retour : %d\n", "%.010u", printf("|%.010u|", u));

// //%x
// printf("\n\n%%x avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


// 	printf("	arg : %s    retour : %d\n\n", "%20.10x", printf("|%20.10x|", n));
	
// 	printf("	arg : %s    retour : %d\n", "% .10x", printf("|% .10x|", n));
// 	printf("	arg : %s    retour : %d\n", "% 10.x", printf("|% 10.x|", n));
// 	printf("	arg : %s    retour : %d\n", "% 20.10x", printf("|% 20.10x|", n));
// 	printf("	arg : %s    retour : %d\n", "%. 10x", printf("|%. 10x|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%+.10x", printf("|%+.10x|", n));
// 	printf("	arg : %s    retour : %d\n", "%+10.x", printf("|%+10.x|", n));
// 	printf("	arg : %s    retour : %d\n", "%+20.10x", printf("|%+20.10x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+10x", printf("|%.+10x|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%-.10x", printf("|%-.10x|", n));
// 	printf("	arg : %s    retour : %d\n", "%-10.x", printf("|%-10.x|", n));
// 	printf("	arg : %s    retour : %d\n", "%-20.10x", printf("|%-20.10x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-10x", printf("|%.-10x|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%#.10x", printf("|%#.10x|", n));
// 	printf("	arg : %s    retour : %d\n", "%#10.x", printf("|%#10.x|", n));
// 	printf("	arg : %s    retour : %d\n", "%#20.10x", printf("|%#20.10x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#10x", printf("|%.#10x|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%0.10x", printf("|%0.10x|", n));
// 	printf("	arg : %s    retour : %d\n", "%010.x", printf("|%010.x|", n));
// 	printf("	arg : %s    retour : %d\n", "%020.10x", printf("|%020.10x|", n));
// 	printf("	arg : %s    retour : %d\n", "%.010x", printf("|%.010x|", n));

// // %X
// printf("\n\n%%X avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
// printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


// 	printf("	arg : %s    retour : %d\n\n", "%20.10X", printf("|%20.10X|", n));
	
// 	printf("	arg : %s    retour : %d\n", "% .10X", printf("|% .10X|", n));
// 	printf("	arg : %s    retour : %d\n", "% 10.X", printf("|% 10.X|", n));
// 	printf("	arg : %s    retour : %d\n", "% 20.10X", printf("|% 20.10X|", n));
// 	printf("	arg : %s    retour : %d\n", "%. 10X", printf("|%. 10X|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%+.10X", printf("|%+.10X|", n));
// 	printf("	arg : %s    retour : %d\n", "%+10.X", printf("|%+10.X|", n));
// 	printf("	arg : %s    retour : %d\n", "%+20.10X", printf("|%+20.10X|", n));
// 	printf("	arg : %s    retour : %d\n", "%.+10X", printf("|%.+10X|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%-.10X", printf("|%-.10X|", n));
// 	printf("	arg : %s    retour : %d\n", "%-10.X", printf("|%-10.X|", n));
// 	printf("	arg : %s    retour : %d\n", "%-20.10X", printf("|%-20.10X|", n));
// 	printf("	arg : %s    retour : %d\n", "%.-10X", printf("|%.-10X|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%#.10X", printf("|%#.10X|", n));
// 	printf("	arg : %s    retour : %d\n", "%#10.X", printf("|%#10.X|", n));
// 	printf("	arg : %s    retour : %d\n", "%#20.10X", printf("|%#20.10X|", n));
// 	printf("	arg : %s    retour : %d\n", "%.#10X", printf("|%.#10X|", n));
// 	printf("\n");
// 	printf("	arg : %s    retour : %d\n", "%0.10X", printf("|%0.10X|", n));
// 	printf("	arg : %s    retour : %d\n", "%010.X", printf("|%010.X|", n));
// 	printf("	arg : %s    retour : %d\n", "%020.10X", printf("|%020.10X|", n));
// 	printf("	arg : %s    retour : %d\n", "%.010X", printf("|%.010X|", n));








	// printf("	arg : %s    retour : %d\n", "", printf("|%+.-010d|", n));
	// printf("	arg : %s    retour : %d\n", "", printf("|%+0100.10d|", n));

	

	// printf("	arg : %s    retour : %d\n", "", printf("|%.20c|", n));
	// printf("	arg : %s    retour : %d\n", "", printf("|%.20p|", s));
	// printf("	arg : %s    retour : %d\n", "", printf("|%020p|", s));
	// printf("	arg : %s    retour : %d\n", "", printf("|%.20s|", s));
	// printf("	arg : %s    retour : %d\n", "", printf("|%.20d|", n));
	// printf("	arg : %s    retour : %d\n", "", printf("|% .20d|", n));
	// printf("	arg : %s    retour : %d\n", "", printf("|%+.-020d|", n));
	// printf("	arg : %s    retour : %d\n", "", printf("|%+0100.20d|", n));
	// printf("	arg : %s    retour : %d\n", "", printf("|%-.20d|", n));
	// printf("	arg : %s    retour : %d\n", "", printf("|%.20i|", n));
	// printf("	arg : %s    retour : %d\n", "", printf("|%.20u|", u));
	// printf("	arg : %s    retour : %d\n", "", printf("|%.20x|", n));
	// printf("	arg : %s    retour : %d\n", "", printf("|%.20X|", n));
	// printf("	arg : %s    retour : %d\n", "", printf("|%#.20x|", n));
	// printf("	arg : %s    retour : %d\n", "", printf("|%#.20X|", n));
	return (0);
}