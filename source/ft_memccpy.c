#include <stdlib.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    int i;
    char *pt;
    char *ptd;

    i = 0;
    pt = (char *)src;
    ptd = (char *)dest;
    while(i < n | pt[i] != c)
    {
        pt[i] = ptd[i];
        i++;
    }
    return((void *)(ptd + i));
}