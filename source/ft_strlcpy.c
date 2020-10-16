#include <stdlib.h>
#include "libft.h"

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
    int i;
    char *pt;
    char *ptd;

    pt = (char *)src;
    ptd = (char *)dst;
    i = 0;
    while(pt[i] | i < size)
    {
        ptd[i] = pt[i];
        i++;
    }
    ptd[i] = 0;
    return (ft_strlen(src));
}