#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 99)
	{
		b = a;
		while (b <= 98)
		{
			if (a != b)
			{
				ft_putchar(a / 10 + '0');
				ft_putchar(a % 10 + '0');
				write(1, " ", 1);
				ft_putchar(b / 10 + '0');
				ft_putchar(b % 10 + '0');
				if (a != 98)
					write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
