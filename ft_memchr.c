#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*source;
	unsigned char		char_to_find;
	size_t				position;

	source = (const unsigned char *)s;
	char_to_find = (unsigned char)c;
	position = 0;

	while (position < n)
	{
		if (*(source + position) == char_to_find)
			return ((void *)(source + position));
		position++;
	}
	return (NULL);
}
