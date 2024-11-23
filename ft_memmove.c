#include <unistd.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d == s || n == 0)
        return dest;

    if (d < s) // Se dest è prima di src, copia in avanti
    {
        for (size_t i = 0; i < n; i++)
            d[i] = s[i];
    }
    else // Se dest è dopo src, copia all'indietro
    {
        for (size_t i = n; i > 0; i--)
            d[i - 1] = s[i - 1];
    }

    return dest;
}
int main()
{
    char buffer[20] = "Hello, world!";
    char ft_buffer[20] = "Hello, world!";

    // Test senza sovrapposizioni
    printf("Prima del memmove (no sovrapposizione):\n");
    printf("Buffer originale: %s\n", buffer);
    printf("Buffer ft_memmove: %s\n", ft_buffer);

    memmove(buffer + 7, buffer, 6); // Sovrascrive parte di sé stesso
    ft_memmove(ft_buffer + 7, ft_buffer, 6);

    printf("\nDopo il memmove (sovrapposizione):\n");
    printf("Buffer originale: %s\n", buffer);
    printf("Buffer ft_memmove: %s\n", ft_buffer);

    // Verifica del risultato
    if (memcmp(buffer, ft_buffer, sizeof(buffer)) == 0)
        printf("\nI risultati sono corretti!\n");
    else
        printf("\nC'è un errore nell'implementazione di ft_memmove.\n");

    return 0;
}
