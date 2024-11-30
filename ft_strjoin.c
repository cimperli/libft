char    *ft_strjoin(char const *s1, char const *s2)
{
    char *nstring;
    size_t len1;
    size_t len 2;

    if (!s1 || !s2)
        return NULL;
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    char *new_str = (char *)malloc(len1 + len2 + 1);

    return (nstring)
}