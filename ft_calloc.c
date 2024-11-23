#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	bytes;
	void	*ptr;

	// Gestione del caso speciale: nmemb o size è 0
	if (n == 0 || size == 0)
	{
		ptr = malloc(1); // Allocare 1 byte per garantire un puntatore unico
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	// Controllo overflow
	bytes = n * size;
	if (size && (bytes / size != n))
		return (NULL);

	// Allocazione memoria
	ptr = malloc(bytes);
	if (ptr == NULL)
		return (NULL);

	// Inizializzazione della memoria
	ft_bzero(ptr, bytes);
	return (ptr);
}



/**/