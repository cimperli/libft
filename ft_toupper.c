
#include <unistd.h>
#include <string.h>

char	*ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	stringa[12] = "hello world";

	ft_toupper(stringa);
	write(1, stringa, strlen(stringa) - 1);
	write (1,"\n", 1);
	return (0);
}