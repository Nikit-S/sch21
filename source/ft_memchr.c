#include <stdlib.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    int i;
    char *pt;

    i = 0;
    pt = (char *)s;
    while(i < n | pt[i] != c)
        i++;
    return((void *)(pt + i));
}