#include <unistd.h>
#include <stdlib.h> // Per malloc

// Funzione ausiliaria per calcolare la lunghezza della stringa
size_t ft_strlen(const char *s) {
    return (*s == '\0') ? 0 : 1 + ft_strlen(s + 1);
}

// Funzione ricorsiva per copiare una stringa
void ft_strcpy_rec(char *dest, const char *src) {
    *dest = *src; // Copia il carattere corrente
    if (*src != '\0') // Continua solo se non è il terminatore
        ft_strcpy_rec(dest + 1, src + 1);
}

// Implementazione di ft_strdup
char *ft_strdup(const char *s) {
    size_t len = ft_strlen(s) + 1; // Lunghezza della stringa inclusa '\0'
    char *copy = (char *)malloc(len);

    if (!copy) // Controllo se malloc ha successo
        return NULL;

    ft_strcpy_rec(copy, s); // Copia ricorsiva della stringa
    return copy;
}
