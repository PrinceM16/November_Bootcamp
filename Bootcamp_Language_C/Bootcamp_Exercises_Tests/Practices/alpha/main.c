#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

void ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int i;
	i = '10';

	while(i >= '1')
	{
		ft_putchar(i);
		i++;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	return (0);
}
