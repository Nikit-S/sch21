#include <stdlib.h>
#include "libft.h"

size_t ft_strlcat (char *dst, const char *src, size_t size)
{
    int i;
    int c;
    char *pt;
    char *ptd;

    pt = (char *)src;
    ptd = (char *)dst;
    i = 0;
    c = ft_strlen(dst);
    while(pt[i] | c + i  < size)
    {
        ptd[c + i] = pt[i];
        i++;
    }
    ptd[c + i] = 0;
    return (c + i);
}