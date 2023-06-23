#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int n = 99;
	char *s = "Hello";
	unsigned int u = 2147483;

ft_printf("\n\ncpsdiuxX flag number de 10 \n\n"); //TESTS OK

	ft_printf("	arg : %s    retour : %d\n", "%10c", ft_printf("|%10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10p", ft_printf("|%10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%10s", ft_printf("|%10s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%10d", ft_printf("|%10d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10i", ft_printf("|%10i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10u", ft_printf("|%10u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%10x", ft_printf("|%10x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10X", ft_printf("|%10X|", n));
	
	ft_printf("\n");

ft_printf("\n\ncpsdiuxX avec flag . et precision de 10\n\n"); //TESTS OK

	ft_printf("	arg : %s    retour : %d\n", "%.10c", ft_printf("|%.10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.10p", ft_printf("|%.10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.10p", ft_printf("|%.10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.10s", ft_printf("|%.10s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.10d", ft_printf("|%.10d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.10i", ft_printf("|%.10i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.10u", ft_printf("|%.10u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.10x", ft_printf("|%.10x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.10X", ft_printf("|%.10X|", n));
	
	ft_printf("\n");

ft_printf("\n\ncpsdiuxX avec flag number de 10 flag . \n\n"); //TESTS OK

	ft_printf("	arg : %s    retour : %d\n", "%10.c", ft_printf("|%10.c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.p", ft_printf("|%10.p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%10.s", ft_printf("|%10.s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%10.d", ft_printf("|%10.d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.i", ft_printf("|%10.i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.u", ft_printf("|%10.u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%10.x", ft_printf("|%10.x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.X", ft_printf("|%10.X|", n));
	
	ft_printf("\n");

ft_printf("\n\ncpsdiuxX avec 10.20 \n\n"); //TESTS OK

	ft_printf("	arg : %s    retour : %d\n", "%10.20c", ft_printf("|%10.20c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.20p", ft_printf("|%10.20p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%10.20s", ft_printf("|%10.20s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%10.20d", ft_printf("|%10.20d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.20i", ft_printf("|%10.20i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.20u", ft_printf("|%10.20u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%10.20x", ft_printf("|%10.20x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.20X", ft_printf("|%10.20X|", n));

	ft_printf("\n");

ft_printf("\n\ncpsdiuxX avec 10.1 \n\n"); //TESTS OK

	ft_printf("	arg : %s    retour : %d\n", "%10.1c", ft_printf("|%10.1c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.1p", ft_printf("|%10.1p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%10.1s", ft_printf("|%10.1s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%10.1d", ft_printf("|%10.1d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.1i", ft_printf("|%10.1i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.1u", ft_printf("|%10.1u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%10.1x", ft_printf("|%10.1x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%10.1X", ft_printf("|%10.1X|", n));

	ft_printf("\n");

ft_printf("\n\ncpsdiuxX avec 20.10 \n\n"); //TESTS OK

	ft_printf("	arg : %s    retour : %d\n", "%20.10c", ft_printf("|%20.10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%20.10p", ft_printf("|%20.10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%20.10s", ft_printf("|%20.10s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%20.10d", ft_printf("|%20.10d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%20.10i", ft_printf("|%20.10i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%20.10u", ft_printf("|%20.10u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%20.10x", ft_printf("|%20.10x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%20.10X", ft_printf("|%20.10X|", n));

	ft_printf("\n\n\n");

//pas de precision apres .

ft_printf("\n\ncpsdiuxX avec flag . uniquement \n\n"); //TESTS OK

	ft_printf("	arg : %s    retour : %d\n", "%.c", ft_printf("|%.c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.p", ft_printf("|%.p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.s", ft_printf("|%.s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.d", ft_printf("|%.d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.i", ft_printf("|%.i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.u", ft_printf("|%.u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.x", ft_printf("|%.x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.X", ft_printf("|%.X|", n));

//%c	
ft_printf("\n\n%%c avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .c", ft_printf("|% .c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. c", ft_printf("|%. c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+.c", ft_printf("|%+.c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+c", ft_printf("|%.+c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-.c", ft_printf("|%-.c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-c", ft_printf("|%.-c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#.c", ft_printf("|%#.c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#c", ft_printf("|%.#c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%0.c", ft_printf("|%0.c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.0c", ft_printf("|%.0c|", n));

//%p
ft_printf("\n\n%%p avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .p", ft_printf("|% .p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%. p", ft_printf("|%. p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%+.p", ft_printf("|%+.p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.+p", ft_printf("|%.+p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%-.p", ft_printf("|%-.p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.-p", ft_printf("|%.-p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%#.p", ft_printf("|%#.p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.#p", ft_printf("|%.#p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%0.p", ft_printf("|%0.p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.0p", ft_printf("|%.0p|", s));

//%s
ft_printf("\n\n%%s avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .s", ft_printf("|% .s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%. s", ft_printf("|%. s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%+.s", ft_printf("|%+.s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.+s", ft_printf("|%.+s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%-.s", ft_printf("|%-.s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.-s", ft_printf("|%.-s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%#.s", ft_printf("|%#.s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.#s", ft_printf("|%.#s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%0.s", ft_printf("|%0.s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.0s", ft_printf("|%.0s|", s));

//%d
ft_printf("\n\n%%d avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .d", ft_printf("|% .d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. d", ft_printf("|%. d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+.d", ft_printf("|%+.d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+d", ft_printf("|%.+d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-.d", ft_printf("|%-.d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-d", ft_printf("|%.-d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#.d", ft_printf("|%#.d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#d", ft_printf("|%.#d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%0.d", ft_printf("|%0.d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.0d", ft_printf("|%.0d|", n));

//%i
ft_printf("\n\n%%i avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .i", ft_printf("|% .i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. i", ft_printf("|%. i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+.i", ft_printf("|%+.i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+i", ft_printf("|%.+i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-.i", ft_printf("|%-.i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-i", ft_printf("|%.-i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#.i", ft_printf("|%#.i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#i", ft_printf("|%.#i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%0.i", ft_printf("|%0.i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.0i", ft_printf("|%.0i|", n));

//%u
ft_printf("\n\n%%u avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .u", ft_printf("|% .u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%. u", ft_printf("|%. u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%+.u", ft_printf("|%+.u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.+u", ft_printf("|%.+u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%-.u", ft_printf("|%-.u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.-u", ft_printf("|%.-u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%#.u", ft_printf("|%#.u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.#u", ft_printf("|%.#u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%0.u", ft_printf("|%0.u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.0u", ft_printf("|%.0u|", u));

//%x
ft_printf("\n\n%%x avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .x", ft_printf("|% .x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. x", ft_printf("|%. x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+.x", ft_printf("|%+.x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+x", ft_printf("|%.+x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-.x", ft_printf("|%-.x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-x", ft_printf("|%.-x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#.x", ft_printf("|%#.x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#x", ft_printf("|%.#x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%0.x", ft_printf("|%0.x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.0x", ft_printf("|%.0x|", n));

// %X
ft_printf("\n\n%%X avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .X", ft_printf("|% .X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. X", ft_printf("|%. X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+.X", ft_printf("|%+.X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+X", ft_printf("|%.+X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-.X", ft_printf("|%-.X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-X", ft_printf("|%.-X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#.X", ft_printf("|%#.X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#X", ft_printf("|%.#X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%0.X", ft_printf("|%0.X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.0X", ft_printf("|%.0X|", n));

//
//
//
//
//precision de 1 apres .
//
//
//
//
ft_printf("\n\ncpsdiuxX avec flag . et precision de 1 ''apres .''\n\n");

	ft_printf("	arg : %s    retour : %d\n", "%.1c", ft_printf("|%.1c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.1p", ft_printf("|%.1p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.1s", ft_printf("|%.1s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.1d", ft_printf("|%.1d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.1i", ft_printf("|%.1i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.1u", ft_printf("|%.1u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.1x", ft_printf("|%.1x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.1X", ft_printf("|%.1X|", n));
	
	ft_printf("\n\n\n");

ft_printf("\n\ncpsdiuxX avec flag . et precision de 1 ''avant .''\n\n");

	ft_printf("	arg : %s    retour : %d\n", "%1.c", ft_printf("|%1.c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%1.p", ft_printf("|%1.p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%1.s", ft_printf("|%1.s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%1.d", ft_printf("|%1.d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%1.i", ft_printf("|%1.i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%1.u", ft_printf("|%1.u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%1.x", ft_printf("|%1.x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%1.X", ft_printf("|%1.X|", n));
	
	ft_printf("\n\n\n");

//%c	
ft_printf("\n\n%%c avec flag  et precision de 1 ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb). flag precision\n\n");


	ft_printf("	arg : %s    retour : %d\n", "% .1c", ft_printf("|% .1c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. 1c", ft_printf("|%. 1c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+.1c", ft_printf("|%+.1c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+1c", ft_printf("|%.+1c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-.1c", ft_printf("|%-.1c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-1c", ft_printf("|%.-1c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#.1c", ft_printf("|%#.1c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#1c", ft_printf("|%.#1c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%0.1c", ft_printf("|%0.1c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.01c", ft_printf("|%.01c|", n));

//%p
ft_printf("\n\n%%p avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb). flag precision\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .1p", ft_printf("|% .1p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%. 1p", ft_printf("|%. 1p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%+.1p", ft_printf("|%+.1p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.+1p", ft_printf("|%.+1p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%-.1p", ft_printf("|%-.1p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.-1p", ft_printf("|%.-1p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%#.1p", ft_printf("|%#.1p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.#1p", ft_printf("|%.#1p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%0.1p", ft_printf("|%0.1p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.01p", ft_printf("|%.01p|", s));

//%s
ft_printf("\n\n%%s avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb). flag precision\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .1s", ft_printf("|% .1s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%. 1s", ft_printf("|%. 1s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%+.1s", ft_printf("|%+.1s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.+1s", ft_printf("|%.+1s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%-.1s", ft_printf("|%-.1s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.-1s", ft_printf("|%.-1s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%#.1s", ft_printf("|%#.1s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.#1s", ft_printf("|%.#1s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%0.1s", ft_printf("|%0.1s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.01s", ft_printf("|%.01s|", s));

//%d
ft_printf("\n\n%%d avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb). flag precision\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .1d", ft_printf("|% .1d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. 1d", ft_printf("|%. 1d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+.1d", ft_printf("|%+.1d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+1d", ft_printf("|%.+1d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-.1d", ft_printf("|%-.1d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-1d", ft_printf("|%.-1d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#.1d", ft_printf("|%#.1d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#1d", ft_printf("|%.#1d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%0.1d", ft_printf("|%0.1d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.01d", ft_printf("|%.01d|", n));

	ft_printf("\n\n%%d avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb). flag precision\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .2d", ft_printf("|% .2d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. 2d", ft_printf("|%. 2d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+.2d", ft_printf("|%+.2d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+2d", ft_printf("|%.+2d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-.2d", ft_printf("|%-.2d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-2d", ft_printf("|%.-2d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#.2d", ft_printf("|%#.2d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#2d", ft_printf("|%.#2d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%0.2d", ft_printf("|%0.2d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.02d", ft_printf("|%.02d|", n));

ft_printf("\n\n%%d avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb). flag precision\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .3d", ft_printf("|% .3d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. 3d", ft_printf("|%. 3d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+.3d", ft_printf("|%+.3d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+3d", ft_printf("|%.+3d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-.3d", ft_printf("|%-.3d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-3d", ft_printf("|%.-3d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#.3d", ft_printf("|%#.3d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#3d", ft_printf("|%.#3d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%0.3d", ft_printf("|%0.3d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.03d", ft_printf("|%.03d|", n));

ft_printf("\n\n%%d avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb). flag precision\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .4d", ft_printf("|% .4d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. 4d", ft_printf("|%. 4d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+.4d", ft_printf("|%+.4d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+4d", ft_printf("|%.+4d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-.4d", ft_printf("|%-.4d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-4d", ft_printf("|%.-4d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#.4d", ft_printf("|%#.4d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#4d", ft_printf("|%.#4d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%0.4d", ft_printf("|%0.4d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.04d", ft_printf("|%.04d|", n));


//%i
ft_printf("\n\n%%i avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");
ft_printf("a) flag . precision\nb). flag precision\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .1i", ft_printf("|% .1i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. 1i", ft_printf("|%. 1i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+.1i", ft_printf("|%+.1i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+1i", ft_printf("|%.+1i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-.1i", ft_printf("|%-.1i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-1i", ft_printf("|%.-1i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#.1i", ft_printf("|%#.1i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#1i", ft_printf("|%.#1i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%0.1i", ft_printf("|%0.1i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.01i", ft_printf("|%.01i|", n));

//%u
ft_printf("\n\n%%u avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb). flag precision\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .1u", ft_printf("|% .1u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%. 1u", ft_printf("|%. 1u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%+.1u", ft_printf("|%+.1u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.+1u", ft_printf("|%.+1u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%-.1u", ft_printf("|%-.1u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.-1u", ft_printf("|%.-1u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%#.1u", ft_printf("|%#.1u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.#1u", ft_printf("|%.#1u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%0.1u", ft_printf("|%0.1u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.01u", ft_printf("|%.01u|", u));

//%x
ft_printf("\n\n%%x avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb). flag precision\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .1x", ft_printf("|% .1x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. 1x", ft_printf("|%. 1x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+.1x", ft_printf("|%+.1x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+1x", ft_printf("|%.+1x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-.1x", ft_printf("|%-.1x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-1x", ft_printf("|%.-1x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#.1x", ft_printf("|%#.1x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#1x", ft_printf("|%.#1x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%0.1x", ft_printf("|%0.1x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.01x", ft_printf("|%.01x|", n));

// %X
ft_printf("\n\n%%X avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb). flag precision\n\n");

	ft_printf("	arg : %s    retour : %d\n", "% .1X", ft_printf("|% .1X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. 1X", ft_printf("|%. 1X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+.1X", ft_printf("|%+.1X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+1X", ft_printf("|%.+1X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-.1X", ft_printf("|%-.1X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-1X", ft_printf("|%.-1X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#.1X", ft_printf("|%#.1X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#1X", ft_printf("|%.#1X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%0.1X", ft_printf("|%0.1X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.01X", ft_printf("|%.01X|", n));
//
//
//
//
//precision de 10 apres .
//
//
//
//


//%c	
ft_printf("\n\n%%c avec flag  et precision de 10 ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


	ft_printf("	arg : %s    retour : %d\n\n", "%20.10c", ft_printf("|%20.10c|", n));

	ft_printf("	arg : %s    retour : %d\n", "% .10c", ft_printf("|% .10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "% 10.c", ft_printf("|% 10.c|", n));
	ft_printf("	arg : %s    retour : %d\n", "% 20.10c", ft_printf("|% 20.10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. 10c", ft_printf("|%. 10c|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%+.10c", ft_printf("|%+.10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+10.c", ft_printf("|%+10.c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+20.10c", ft_printf("|%+20.10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+10c", ft_printf("|%.+10c|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%-.10c", ft_printf("|%-.10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-10.c", ft_printf("|%-10.c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-20.10c", ft_printf("|%-20.10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-10c", ft_printf("|%.-10c|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%#.10c", ft_printf("|%#.10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#10.c", ft_printf("|%#10.c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#20.10c", ft_printf("|%#20.10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#10c", ft_printf("|%.#10c|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%0.10c", ft_printf("|%0.10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%010.c", ft_printf("|%010.c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%020.10c", ft_printf("|%020.10c|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.010c", ft_printf("|%.010c|", n));

//%p
ft_printf("\n\n%%p avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


	ft_printf("	arg : %s    retour : %d\n\n", "%20.10p", ft_printf("|%20.10p|", s));
	
	ft_printf("	arg : %s    retour : %d\n", "% .10p", ft_printf("|% .10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "% 10.p", ft_printf("|% 10.p|", s));
	ft_printf("	arg : %s    retour : %d\n", "% 20.10p", ft_printf("|% 20.10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%. 10p", ft_printf("|%. 10p|", s));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%+.10p", ft_printf("|%+.10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%+10.p", ft_printf("|%+10.p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%+20.10p", ft_printf("|%+20.10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.+10p", ft_printf("|%.+10p|", s));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%-.10p", ft_printf("|%-.10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%-10.p", ft_printf("|%-10.p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%-20.10p", ft_printf("|%-20.10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.-10p", ft_printf("|%.-10p|", s));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%#.10p", ft_printf("|%#.10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%#10.p", ft_printf("|%#10.p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%#20.10p", ft_printf("|%#20.10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.#10p", ft_printf("|%.#10p|", s));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%0.10p", ft_printf("|%0.10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%010.p", ft_printf("|%010.p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%020.10p", ft_printf("|%020.10p|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.010p", ft_printf("|%.010p|", s));

//%s
ft_printf("\n\n%%s avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


	ft_printf("	arg : %s    retour : %d\n\n", "%20.10s", ft_printf("|%20.10s|", s));
	
	ft_printf("	arg : %s    retour : %d\n", "% .10s", ft_printf("|% .10s|", s));
	ft_printf("	arg : %s    retour : %d\n", "% 10.s", ft_printf("|% 10.s|", s));
	ft_printf("	arg : %s    retour : %d\n", "% 20.10s", ft_printf("|% 20.10s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%. 10s", ft_printf("|%. 10s|", s));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%+.10s", ft_printf("|%+.10s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%+10.s", ft_printf("|%+10.s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%+20.10s", ft_printf("|%+20.10s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.+10s", ft_printf("|%.+10s|", s));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%-.10s", ft_printf("|%-.10s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%-10.s", ft_printf("|%-10.s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%-20.10s", ft_printf("|%-20.10s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.-10s", ft_printf("|%.-10s|", s));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%#.10s", ft_printf("|%#.10s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%#10.s", ft_printf("|%#10.s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%#20.10s", ft_printf("|%#20.10s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.#10s", ft_printf("|%.#10s|", s));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%0.10s", ft_printf("|%0.10s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%010.s", ft_printf("|%010.s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%020.10s", ft_printf("|%020.10s|", s));
	ft_printf("	arg : %s    retour : %d\n", "%.010s", ft_printf("|%.010s|", s));

//%d
ft_printf("\n\n%%d avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


	ft_printf("	arg : %s    retour : %d\n\n", "%20.10d", ft_printf("|%20.10d|", n));
	
	ft_printf("	arg : %s    retour : %d\n", "% .10d", ft_printf("|% .10d|", n));
	ft_printf("	arg : %s    retour : %d\n", "% 10.d", ft_printf("|% 10.d|", n));
	ft_printf("	arg : %s    retour : %d\n", "% 20.10d", ft_printf("|% 20.10d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. 10d", ft_printf("|%. 10d|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%+.10d", ft_printf("|%+.10d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+10.d", ft_printf("|%+10.d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+20.10d", ft_printf("|%+20.10d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+10d", ft_printf("|%.+10d|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%-.10d", ft_printf("|%-.10d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-10.d", ft_printf("|%-10.d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-20.10d", ft_printf("|%-20.10d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-10d", ft_printf("|%.-10d|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%#.10d", ft_printf("|%#.10d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#10.d", ft_printf("|%#10.d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#20.10d", ft_printf("|%#20.10d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#10d", ft_printf("|%.#10d|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%0.10d", ft_printf("|%0.10d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%010.d", ft_printf("|%010.d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%020.10d", ft_printf("|%020.10d|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.010d", ft_printf("|%.010d|", n));

//%i
ft_printf("\n\n%%i avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n\n");
ft_printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


	ft_printf("	arg : %s    retour : %d\n\n", "%20.10i", ft_printf("|%20.10i|", n));
	
	ft_printf("	arg : %s    retour : %d\n", "% .10i", ft_printf("|% .10i|", n));
	ft_printf("	arg : %s    retour : %d\n", "% 10.i", ft_printf("|% 10.i|", n));
	ft_printf("	arg : %s    retour : %d\n", "% 20.10i", ft_printf("|% 20.10i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. 10i", ft_printf("|%. 10i|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%+.10i", ft_printf("|%+.10i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+10.i", ft_printf("|%+10.i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+20.10i", ft_printf("|%+20.10i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+10i", ft_printf("|%.+10i|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%-.10i", ft_printf("|%-.10i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-10.i", ft_printf("|%-10.i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-20.10i", ft_printf("|%-20.10i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-10i", ft_printf("|%.-10i|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%#.10i", ft_printf("|%#.10i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#10.i", ft_printf("|%#10.i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#20.10i", ft_printf("|%#20.10i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#10i", ft_printf("|%.#10i|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%0.10i", ft_printf("|%0.10i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%010.i", ft_printf("|%010.i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%020.10i", ft_printf("|%020.10i|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.010i", ft_printf("|%.010i|", n));

//%u
ft_printf("\n\n%%u avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


	ft_printf("	arg : %s    retour : %d\n\n", "%20.10u", ft_printf("|%20.10u|", u));
	
	ft_printf("	arg : %s    retour : %d\n", "% .10u", ft_printf("|% .10u|", u));
	ft_printf("	arg : %s    retour : %d\n", "% 10.u", ft_printf("|% 10.u|", u));
	ft_printf("	arg : %s    retour : %d\n", "% 20.10u", ft_printf("|% 20.10u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%. 10u", ft_printf("|%. 10u|", u));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%+.10u", ft_printf("|%+.10u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%+10.u", ft_printf("|%+10.u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%+20.10u", ft_printf("|%+20.10u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.+10u", ft_printf("|%.+10u|", u));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%-.10u", ft_printf("|%-.10u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%-10.u", ft_printf("|%-10.u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%-20.10u", ft_printf("|%-20.10u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.-10u", ft_printf("|%.-10u|", u));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%#.10u", ft_printf("|%#.10u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%#10.u", ft_printf("|%#10.u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%#20.10u", ft_printf("|%#20.10u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.#10u", ft_printf("|%.#10u|", u));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%0.10u", ft_printf("|%0.10u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%010.u", ft_printf("|%010.u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%020.10u", ft_printf("|%020.10u|", u));
	ft_printf("	arg : %s    retour : %d\n", "%.010u", ft_printf("|%.010u|", u));

//%x
ft_printf("\n\n%%x avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


	ft_printf("	arg : %s    retour : %d\n\n", "%20.10x", ft_printf("|%20.10x|", n));
	
	ft_printf("	arg : %s    retour : %d\n", "% .10x", ft_printf("|% .10x|", n));
	ft_printf("	arg : %s    retour : %d\n", "% 10.x", ft_printf("|% 10.x|", n));
	ft_printf("	arg : %s    retour : %d\n", "% 20.10x", ft_printf("|% 20.10x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. 10x", ft_printf("|%. 10x|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%+.10x", ft_printf("|%+.10x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+10.x", ft_printf("|%+10.x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+20.10x", ft_printf("|%+20.10x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+10x", ft_printf("|%.+10x|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%-.10x", ft_printf("|%-.10x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-10.x", ft_printf("|%-10.x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-20.10x", ft_printf("|%-20.10x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-10x", ft_printf("|%.-10x|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%#.10x", ft_printf("|%#.10x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#10.x", ft_printf("|%#10.x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#20.10x", ft_printf("|%#20.10x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#10x", ft_printf("|%.#10x|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%0.10x", ft_printf("|%0.10x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%010.x", ft_printf("|%010.x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%020.10x", ft_printf("|%020.10x|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.010x", ft_printf("|%.010x|", n));

// %X
ft_printf("\n\n%%X avec flag . ET ' ' ou + ou - ou # ou 0 une fois devant . une fois derriere\n");
ft_printf("a) flag . precision\nb)flag flagnumber .\nc). flag flagnumber . precision\nd)flag precision\n\n");


	ft_printf("	arg : %s    retour : %d\n\n", "%20.10X", ft_printf("|%20.10X|", n));
	
	ft_printf("	arg : %s    retour : %d\n", "% .10X", ft_printf("|% .10X|", n));
	ft_printf("	arg : %s    retour : %d\n", "% 10.X", ft_printf("|% 10.X|", n));
	ft_printf("	arg : %s    retour : %d\n", "% 20.10X", ft_printf("|% 20.10X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%. 10X", ft_printf("|%. 10X|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%+.10X", ft_printf("|%+.10X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+10.X", ft_printf("|%+10.X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%+20.10X", ft_printf("|%+20.10X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.+10X", ft_printf("|%.+10X|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%-.10X", ft_printf("|%-.10X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-10.X", ft_printf("|%-10.X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%-20.10X", ft_printf("|%-20.10X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.-10X", ft_printf("|%.-10X|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%#.10X", ft_printf("|%#.10X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#10.X", ft_printf("|%#10.X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%#20.10X", ft_printf("|%#20.10X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.#10X", ft_printf("|%.#10X|", n));
	ft_printf("\n");
	ft_printf("	arg : %s    retour : %d\n", "%0.10X", ft_printf("|%0.10X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%010.X", ft_printf("|%010.X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%020.10X", ft_printf("|%020.10X|", n));
	ft_printf("	arg : %s    retour : %d\n", "%.010X", ft_printf("|%.010X|", n));

    return (0);
}