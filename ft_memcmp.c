#include "libft.h"

int	ft_memcmp(const void *buffer1, const void *buffer2, size_t size)
{
	const unsigned char	*byte1;
	const unsigned char	*byte2;
	size_t				index;

	byte1 = (const unsigned char *)buffer1;
	byte2 = (const unsigned char *)buffer2;
	index = 0;

	while (index < size)
	{
		if (byte1[index] != byte2[index])
			return ((int)(byte1[index] - byte2[index]));
		index
