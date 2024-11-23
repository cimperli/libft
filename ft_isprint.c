#include <stdio.h>
#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return 1;
    return 0;
}

/*int main() {
    int ch1 = 66;  // 'B'
    int ch4 = 10;  // Nuova linea (non stampabile)

    printf("ft_isprint(%d): %d\n", ch1, ft_isprint(ch1)); // 1 (stampabile)
    printf("ft_isprint(%d): %d\n", ch4, ft_isprint(ch4)); // 0 (non stampabile)

    return 0;
}*/