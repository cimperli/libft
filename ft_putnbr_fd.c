#include "libft.h"

static void	print_digits(int number, int fd)
{
	if (number == 0)
	{
		return ;
	}
	print_digits(number / 10, fd);
	ft_putchar_fd((number % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		print_digits(147483648, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
		print_digits(n, fd);
}