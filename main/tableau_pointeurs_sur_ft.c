#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef int	(*t_fp_marie)();

int	multiply(int c)
{
	return (c * 2);
}

int	divide(int c)
{
	return (c / 2);
}

t_fp_marie	idformat(int c)
{
	t_fp_marie	*storage;

	storage = (t_fp_marie[128]){
		(void *)0,
		['c'] = multiply,
		['d'] = divide,
	};
	return (storage[c]);
}

int main(void)
{
    t_fp_marie    print;
    int res;

    print = idformat('c');
    res = printf("%d\n", print(42));
}
