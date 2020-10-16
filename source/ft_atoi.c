#include "libft.h"

int ft_atoi(const char *nptr)
{
    unsigned int ret;
    int min;
    int i;

    i = 0;
    ret = 0;
    while(nptr[i] == ' ')
        i++;
    min = nptr[i] == '-' ? -1 : 1;
    i = (nptr[i] == '-' | nptr[i] == '+') ? i + 1 : i;
    while(nptr[i] >= '0' && nptr[i] <= '9')
    {
        ret = ret * 10 + nptr[i] - '0';
        i++;
    }
    return (ret * min);
}