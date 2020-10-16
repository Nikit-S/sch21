#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *ret;

    i = ft_strlen(s);
    ret = (char *)s;
    while(i >= 0)
    {
        if(ret[i] == c)
            return(&ret[i]);
        i--;
    }
    return(NULL);
}