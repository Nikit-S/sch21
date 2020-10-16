#include <stdlib.h>

char *ft_strndup(const char *s, size_t n)
{
    char    *ret;
    int     i;

    ret = malloc(sizeof(char) * (n + 1));
    while(s[i] | i < n)
    {
        ret[i] = s[i];
        i++;
    }
    return (ret);
}