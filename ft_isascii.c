#include "libft.h"

int ft_isascii(int c)
{
    int i;

    i = 0;

    if (c >= 0 && c < 127)
        i = 1;
    return(i);
}