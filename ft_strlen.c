#include <stdio.h>
#include "libft.h"
size_t ft_strlen(const char *str)
{
    size_t i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return i; // Restituisce la lunghezza della stringa
}

/*int main() {
    const char *str1 = "Hello, world!";
    const char *str2 = "12345";
    const char *str3 = ""; // Stringa vuota

    printf("ft_strlen(str1): %zu\n", ft_strlen(str1)); // 13
    printf("ft_strlen(str2): %zu\n", ft_strlen(str2)); // 5
    printf("ft_strlen(str3): %zu\n", ft_strlen(str3)); // 0

    return 0;
}

%zu è perchè %d potrebbe causare problemi perchè size_t puo assumere valore > di int*/