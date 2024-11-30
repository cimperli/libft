#include "libft.h"

static int is_in_set(char c, const char *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char *trimmed_str;

    if (!s1 || !set)
        return (NULL);

    start = 0;
    while (s1[start] && is_in_set(s1[start], set))
        start++;
    end = ft_strlen(s1);
    while (end > start && is_in_set(s1[end - 1], set))
        end--;

    trimmed_str = (char *)malloc((end - start + 1) * sizeof(char));
    if (!trimmed_str)
        return (NULL);
        
    size_t i = 0;
    while (start < end)
    {
        trimmed_str[i] = s1[start];
        i++;
        start++;
    }
    trimmed_str[i] = '\0';

    return (trimmed_str);
}