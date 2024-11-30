#include <unistd.h>
#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    if(dest < src)
    {
        i = 0;
        while (i < n)
        {
            ((char *)dest)[i] = ((const char *)src)[i];
            i++;
        }
    }
    else
    {
        i = n;
        while (i > 0)
        {
            ((char *)dest)[i - 1] = ((const char *)src)[i - 1];
            i--;
        }
    }
    return (dest);
}
