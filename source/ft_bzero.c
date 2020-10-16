#include "libft.h"

void ft_bzero(void *s, int n)
{
    int i;
    char *pt;

    i = 0;
    pt = (char *)s;
    while(i < n)
    {
        pt[i] = 0;
        i++;
    }
}