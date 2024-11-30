#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len ++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len ++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	j = dest_len;
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		i ++;
		j ++;
	}
	if (j < size)
		dest[j] = '\0';
	return (dest_len + src_len);
}