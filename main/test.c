#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 9;

    while(i < 10 || j < 10)
    {
        printf("%d\n", i);
        i++;
        j++;
    }
}