#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main(void) { ft_putchar_fd('A', 1); // Scrive 'A' su stdout return (0); }
*/