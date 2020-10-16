#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;
    char *pt;
    char *ptd;

    i = 0;
    pt = (char *)src;
    ptd = (char *)dest;
    while(i < n)
    {
        ptd[i] = pt[i];
        i++;
    }
    return(dest);
}