#include "libft.h"

static void free_all(char **arr, size_t i)
{
    while (i > 0)
        free(arr[--i]);
    free(arr);
}

static size_t count_words(const char *s, char c)
{
    size_t count;
    int in_word;

    count = 0;
    in_word = 0;
    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

static char **compiler(char const *s, char **result, char c, size_t word_count)
{
    size_t i;
    size_t end;
    size_t start;

    start = 0;
    i = 0;
    while (i < word_count)
    {
        while (s[start] == c)
            start++;
        end = start;
        while (s[end] && s[end] != c)
            end++;
        result[i] = ft_substr(s, start, end - start);
        if (!result[i])
        {
            free_all(result, i);
            return (NULL);
        }
        start = end;
        i++;
    }
    result[i] = NULL;
    return (result);
}

char **ft_split(char const *s, char c)
{
    char **result;
    size_t word_count;

    if (!s)
        return (NULL);
    word_count = count_words(s, c);
    result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result)
        return (NULL);
    return (compiler(s, result, c, word_count));
}

#include <stdio.h>
int main() {
    char s[] = "Hello World! This is a test.";
    char **result = ft_split(s, ' ');
    for (size_t i = 0; result[i] != NULL; i++)
        printf("%s\n", result[i]);
    // Ricorda di liberare la memoria allocata
    for (size_t i = 0; result[i] != NULL; i++)
        free(result[i]);
    free(result);
    return 0;
}

/*
int	main(void)
{
	const char *str1 = "ciao come va
    ";
	char **result1 = ft_split(str1, ' ');

	printf("Test 1: Separazione con spazio\n");
	if (result1)
	{
		for (int i = 0; result1[i] != NULL; i++)
			printf("Parola %d: '%s'\n", i + 1, result1[i]);

		for (int i = 0; result1[i] != NULL; i++)
			free(result1[i]);
		free(result1);
	}
	else
		printf("Errore nella separazione della stringa.\n");
	return (0);
}*/
