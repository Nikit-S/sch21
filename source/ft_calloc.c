#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *ret;
    int     i;
    char    *pt;

    i = 0;
    ret = malloc(nmemb * size);
    if(ret == 0)
        return NULL;
    pt = (char *)ret;
    while(i < nmemb * size)
    {
        pt[i] = 0;
        i++;
    }
    return(ret);
}