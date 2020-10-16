#include <stdlib.h>

void *ft_memset(void *s, int c, int n)
{
    int i;
    char *pt;

    i = 0;
    pt = (char *)s;
    while(i < n)
    {
        pt[i] = c;
        i++;
    }
    return(s);
}