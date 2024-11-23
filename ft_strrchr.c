#include <unistd.h>

char    *ft_strchr(const char *s, int c) {
    while (*s)
    {  
        if (*s == (char)c) {
            return (char *)s; // Ritorna il puntatore alla prima occorrenza di 'c'
        }
        s++;
    }
    // Controlla se 'c' è il terminatore '\0'
    if (c == '\0') {
        return (char *)s;
    }
    return NULL; // Ritorna NULL se 'c' non è presente nella stringa
}

int main() {
    char str[] = "Hello, world!";
    char ch1 = 'o';
    char ch2 = 'x';
    char ch3 = '\0';

    // Cerca 'o'
    char *result1 = ft_strchr(str, ch1);
    printf("Cercando '%c': %s\n", ch1, result1 ? result1 : "Carattere non trovato");

    // Cerca 'x'
    char *result2 = ft_strchr(str, ch2);
    printf("Cercando '%c': %s\n", ch2, result2 ? result2 : "Carattere non trovato");

    // Cerca '\0'
    char *result3 = ft_strchr(str, ch3);
    printf("Cercando terminatore '\\0': %s\n", result3 ? "Trovato" : "Non trovato");

    return 0;
}

