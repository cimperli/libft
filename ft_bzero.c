#include <unistd.h>
#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

void    ft_bzero(void *s, size_t n) //puntatore gen, byte mem da azzerare
{
    unsigned char *p = (unsigned char *)s;
    size_t  i = 0;

    while (i < n)
    {
        p[i] = 0;
        i++;
    }
}

/*int main()
{
    char buffer[20] = "ansia da prestazione";
    char ft_buffer[20] = "ansia da prestazione";

    printf("Prima di bzero:\n");
    printf("Buffer originale: '%s'\n", buffer);
    printf("Buffer ft_bzero:  '%s'\n", ft_buffer);

    // Applichiamo bzero e ft_bzero
    bzero(buffer, 5);
    ft_bzero(ft_buffer, 5);

    printf("\nDopo bzero:\n");
    printf("Buffer originale: '%s'\n", buffer);
    printf("Buffer ft_bzero:  '%s'\n", ft_buffer);

    // Controllo manuale dei primi 5 caratteri
    for (int i = 0; i < 5; i++)
    {
        if (buffer[i] != ft_buffer[i])
        {
            printf("\nErrore: NON CORRISPONDONO.\n");
            return 1;
        }
    }
    printf("\nCORRETTO!!\n");

    return 0;
}*/
