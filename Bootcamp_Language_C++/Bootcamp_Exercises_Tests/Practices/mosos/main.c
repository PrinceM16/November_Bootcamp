#include <stdio.h>
#include <stdlib.h>



void ft_putchar(char M)
{
    write(1, &M, 1);

}

int main(void)
{
    ft_putchar();
    return 0;
}
