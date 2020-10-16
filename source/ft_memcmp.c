#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    char *pt;
    char *ptd;

    if (n == 0)
        return (0);
    i = 0;
    pt = (char *)s1;
    ptd = (char *)s2;
    while(i < n | pt[i] != ptd[i])
        i++;
    return(pt[i] - ptd[i]);
}