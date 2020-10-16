#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char buf[n];
    int i;
    char *pt;
    char *ptd;

    i = 0;
    pt = (char *)src;
    ptd = (char *)dest;
    while(i < n)
    {
        buf[i] = pt[i];
        i++;
    }
    i = 0;
    while(buf[i])
    {
        ptd[i] = buf[i];
        i++;
    }
    return(ptd);
}