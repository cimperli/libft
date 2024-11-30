#include <stdlib.h>

static int  ft_len(int n)
{
    int len;

    len = (n <= 0) ? 1 : 0;
    while (n)
    {
        n /= 10;
        len++;
    }
    return (len);
}

static char *build_str(long num, int len)
{
    char    *str;
    int     i;

    i = len;
    str = (char *)malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (num == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (num < 0)
    {
        str[0] = '-';
        num *= -1;
    }
    while (num > 0)
    {
        str[--i] = (num % 10) + '0';
        num /= 10;
    }
    return (str);
}

char    *ft_itoa(int n)
{
    long    num;
    int     len;

    num = n;
    len = ft_len(num);
    return (build_str(num, len));
}

