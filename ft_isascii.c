#include    <stdio.h>
#include "libft.h"
int ft_isascii(int c)
{
    if (c >= 0 && c< 127)
        return 1;
}

/*int main() {
    int ch1 = 65;  // 'A'
    int ch2 = 200; // Non ASCII
    int ch3 = -10; // Non ASCII

    printf("ft_isascii(%d): %d\n", ch1, ft_isascii(ch1)); // Deve restituire 1
    printf("ft_isascii(%d): %d\n", ch2, ft_isascii(ch2)); // Deve restituire 0
    printf("ft_isascii(%d): %d\n", ch3, ft_isascii(ch3)); // Deve restituire 0

    return 0;
}*/