#include "libft.h"

void    to_uppercase(unsigned int i, char *c) { if (*c >= 'a' && *c <= 'z') *c = *c - 32; }

void    ft_striteri(char *s, void (*f)(unsigned int, char*)) { unsigned int i; if (!s || !f) return; i = 0; while (s[i]) { f(i, &s[i]); i++; } }

/*
int	main(void)
{
	char str[] = "CiAo, Come STAI";
	
	printf("Stringa originale: %s\n", str);
	ft_striteri(str, to_uppercase);
	printf("Stringa modificata: %s\n", str);
	
	return (0);
}*/