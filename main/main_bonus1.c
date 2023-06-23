#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	// char *c = NULL;
	// char *c = "";
	// char *c = "N";
	// char *c = "Hello";
	// char c = 'a';
	// int c = 256;
	int c = 1;
	// int c = -1;
	// int c = 0;
	// int c = 99;
	// int c = 2147483647;
	// int c = -2147483648;
	int		i;

// TEST FLAG number seul de 0 a 6, et 30

	i = 0;

	ft_printf("\nTEST FLAG 0 avec !nb  et nb 1 a 6, int max et intmax + 1\n");

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%d|\n", c));
	printf("    retour : %d", ft_printf("|%d|\n", c));
	
	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%1d|\n", c));
	printf("    retour : %d", ft_printf("|%1d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%2d|\n", c));
	printf("    retour : %d", ft_printf("|%2d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%3d|\n", c));
	printf("    retour : %d", ft_printf("|%3d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%4d|\n", c));
	printf("    retour : %d", ft_printf("|%4d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%5d|\n", c));
	printf("    retour : %d", ft_printf("|%5d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%6d|\n", c));
	printf("    retour : %d", ft_printf("|%6d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%30d|\n", c));
	printf("    retour : %d", ft_printf("|%30d|\n", c));

// TEST FLAG 0 avec !nb  et nb 1 a 6, int max et intmax + 1

	ft_printf("\nTEST FLAG 0 avec !nb  et nb 1 a 6, int max et intmax + 1\n");

	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%00d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%00d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%01d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%01d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%02d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%02d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%03d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%03d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%04d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%04d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%05d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%05d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%06d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%06d|\n", c));

	// printf("\nTEST %d\n\n", i++); 
	// printf("    retour : %d", printf("|%02147483647d|\n", c));
	// ft_printf("    retour : %d", ft_printf("|%02147483647d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%d%+02147483648dpopo|\n", 300, c));
	printf("\n");
	ft_printf("    retour : %d", ft_printf("|%d%02147483648dpopo|\n", 300, c));
	ft_printf("\n");

// TEST FLAG # avec !nb  et nb 1 a 6, int max et intmax + 1

	printf("\nTEST FLAG # avec !nb  et nb 1 a 6, int max et intmax + 1\n");

	i = 0;

	printf("\nTEST %d\n\n", i++);
	printf("    retour : %d", printf("|%#d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#1d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#2d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#2d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#3d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#3d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#4d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#4d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#5d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#5d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#6d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#6d|\n", c));

	// printf("\nTEST %d\n\n", i++); 
	// printf("    retour : %d", printf("|%#2147483647d|\n", c));
	// ft_printf("    retour : %d", ft_printf("|%#2147483647d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%d%#02147483648dpopo|\n", 300, c));
	printf("\n");
	ft_printf("    retour : %d", ft_printf("|%d%#02147483648dpopo|\n", 300, c));
	ft_printf("\n");

// TEST FLAG ' ' avec !nb  et nb 1 a 6, int max et intmax + 1

	printf("\nTEST FLAG ' ' avec !nb  et nb 1 a 6, int max et intmax + 1\n");

	i = 0;

	printf("\nTEST %d\n\n", i++);
	printf("    retour : %d", printf("|% d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% 1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% 1d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% 2d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% 2d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% 3d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% 3d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% 4d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% 4d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% 5d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% 5d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% 6d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% 6d|\n", c));

	// printf("\nTEST %d\n\n", i++); 
	// printf("    retour : %d", printf("|% 2147483647d|\n", c));
	// ft_printf("    retour : %d", ft_printf("|% 2147483647d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%d% 02147483648dpopo|\n", 300, c));
	printf("\n");
	ft_printf("    retour : %d", ft_printf("|%d%# 02147483648dpopo|\n", 300, c));
	ft_printf("\n");

// TEST FLAG + avec !nb  et nb 1 a 5, int max et intmax + 1

	printf("\nTEST FLAG + avec !nb  et nb 1 a 6, int max et intmax + 1\n");

	i = 0;

	printf("\nTEST %d\n\n", i++);
	printf("    retour : %d", printf("|%+d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+1d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+2d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+2d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+3d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+3d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+4d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+4d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+5d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+5d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+6d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+6d|\n", c));

	// printf("\nTEST %d\n\n", i++); 
	// printf("    retour : %d", printf("|%+2147483647d|\n", c));
	// ft_printf("    retour : %d", ft_printf("|%+2147483647d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+02147483648dpopo|\n"));
	printf("\n");
	ft_printf("    retour : %d", ft_printf("|%+02147483648dpopo|\n"));
	ft_printf("\n");

// TEST FLAG - avec !nb  et nb 1 a 6, int max et intmax + 1

	printf("\nTEST FLAG - avec !nb  et nb 1 a 6, int max et intmax + 1\n");

	i = 0;

	printf("\nTEST %d\n\n", i++);
	printf("    retour : %d", printf("|%-d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-1d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-2d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-2d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-3d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-3d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-4d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-4d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-5d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-5d|\n", c)); 

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-6d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-6d|\n", c));

	// printf("\nTEST %d\n\n", i++); 
	// printf("    retour : %d", printf("|%-2147483647d|\n", c));
	// ft_printf("    retour : %d", ft_printf("|%-2147483647d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-02147483648dpopo|\n"));
	printf("\n");
	ft_printf("    retour : %d", ft_printf("|%-02147483648dpopo|\n"));
	ft_printf("\n");

// TEST FLAG 0 et autre avec !nb et nb = 1 et nb = 2 et nb = 20

	printf("\nTEST FLAG 0 et autre avec !nb et nb = 1 et nb = 2 et nb = 20\n");

	//nb = 0
	printf("\nnb = 0\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0#d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0#d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0 d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0 d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0+d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0+d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0-d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0-d|\n", c));

	// nb = 1
	printf("\nnb = 1\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0#1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0#1d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0 1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0 1d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0+1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0+1d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0-1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0-1d|\n", c));
	
	// nb = 20
	printf("\nnb = 20\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0#20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0#20d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0 20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0 20d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0+20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0+20d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0-20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0-20d|\n", c));

// TEST FLAG # et autre avec !nb et nb = 1 et nb = 2 et nb = 20
	
	printf("\nTEST FLAG # et autre avec !nb et nb = 1 et nb = 2 et nb = 20\n");
	
	//nb = 0
	printf("\nnb = 0\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#0d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#0d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%# d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%# d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#+d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#+d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#-d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#-d|\n", c));

	// nb = 1
	printf("\nnb = 1\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#01d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#01d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%# 1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%# 1d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#+1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#+1d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#-1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#-1d|\n", c));
	
	// nb = 20
	printf("\nnb = 20\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#020d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#020d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%# 20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%# 20d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#+20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#+20d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%#-20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%#-20d|\n", c));

// TEST FLAG ' ' et autre avec !nb et nb = 1 et nb = 2 et nb = 20

	printf("\nTEST FLAG ' ' et autre avec !nb et nb = 1 et nb = 2 et nb = 20\n");

	//nb = 0
	printf("\nnb = 0\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% #d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% #d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% 0d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% 0d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% +d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% +d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% -d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% -d|\n", c));

	// nb = 1
	printf("\nnb = 1\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% #1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% #1d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% 01d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% 01d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% +1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% +1d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% -1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% -1d|\n", c));
	
	// nb = 20
	printf("\nnb = 20\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% #20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% #20d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% 020d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% 020d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% +20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% +20d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|% -20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|% -20d|\n", c));

// TEST FLAG + et autre avec !nb et nb = 1 et nb = 2 et nb = 20

	printf("\nTEST FLAG + et autre avec !nb et nb = 1 et nb = 2 et nb = 20\n");

	//nb = 0
	printf("\nnb = 0\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+#d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+#d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+ d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+ d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+0d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+0d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+-d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+-d|\n", c));

	// nb = 1
	printf("\nnb = 1\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+#1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+#1d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+ 1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+ 1d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+01d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+01d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+-1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+-1d|\n", c));
	
	// nb = 20
	printf("\nnb = 20\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+#20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+#20d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+ 20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+ 20d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+020d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+020d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+-20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+-20d|\n", c));

// TEST FLAG - et autre avec !nb et nb = 1 et nb = 2 et nb = 20

	printf("\nTEST FLAG - et autre avec !nb et nb = 1 et nb = 2 et nb = 20\n");

	//nb = 0
	printf("\nnb = 0\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-#d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-#d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%- d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%- d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-+d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-+d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-0d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-0d|\n", c));

	// nb = 1
	printf("\nnb = 1\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-#1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-#1d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%- 1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%- 1d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-+1d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-+1d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-01d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-01d|\n", c));
	
	// nb = 20
	printf("\nnb = 20\n");
	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-#20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-#20d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%- 20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%- 20d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-+20d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-+20d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%-020d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%-020d|\n", c));

// TESTS AUTRES

	printf("\nTESTS AUTRES\n");

	i = 0;

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%0%#d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%0%#d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%%#d|\n", c));
	ft_printf("    retour : %d", ft_printf("|%%#d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%5064%|\n", c));
	ft_printf("    retour : %d", ft_printf("|%5064%|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+%|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+%|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%1%|\n", c));
	ft_printf("    retour : %d", ft_printf("|%1%|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%1-%|\n", c));
	ft_printf("    retour : %d", ft_printf("|%1-%|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|%+-8790y|\n", c));
	ft_printf("    retour : %d", ft_printf("|%+-8790y|\n", c));


	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|baba is cool%%% -0#+78d|\n", c));
	ft_printf("    retour : %d", ft_printf("|baba is cool%%% -0#+78d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|baba is cool%%% -0#+78d|\n", c));
	ft_printf("    retour : %d", ft_printf("|baba is cool%%% -0#+78d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|baba is cool%%%500 -0#+78d|\n", c));
	ft_printf("    retour : %d", ft_printf("|baba is cool%%%500 -0#+78d|\n", c));
/*
////////////////////////////////////////////////////////////////////////////////////////
	printf("\n\n\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|baba is cool% -0#+78+d|\n", c));
	ft_printf("    retour : %d", ft_printf("|baba is cool% -0#+78+d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|baba is cool% -#+78+d|\n", c));
	ft_printf("    retour : %d", ft_printf("|baba is cool% -#+78+d|\n", c));

	printf("\nTEST %d\n\n", i++); 
	printf("    retour : %d", printf("|baba is cool% -078+d|\n", c));
	ft_printf("    retour : %d", ft_printf("|baba is cool% -078+d|\n", c));
*/	




	return (0);
}