#include "source/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    printf("memset() my |%|, real |%|\n",ft_memset(), memset());
    printf("bzero() my |%|, real |%|\n",ft_bzero(), bzero());
    printf("memcpy() my |%|, real |%|\n",ft_memcpy(), memcpy());
    printf("memccpy() my |%|, real |%|\n",ft_memccpy(), memccpy());
    printf("memmove() my |%|, real |%|\n",ft_memmove(), memmove());
    printf("memchr() my |%|, real |%|\n",ft_memchr(), memchr());
    printf("memcmp() my |%|, real |%|\n",ft_memcmp(), memcmp());
    printf("strlen() my |%|, real |%|\n",ft_strlen(), strlen());
    printf("strlcpy() my |%|, real |%|\n",ft_strlcpy(), strlcpy());
    printf("strlcat() my |%|, real |%|\n",ft_strlcat(), strlcat());
    printf("strchr() my |%|, real |%|\n",ft_strchr(), strchr());
    printf("strrchr() my |%|, real |%|\n",ft_strrchr(), strrchr());
    printf("strnstr() my |%|, real |%|\n",ft_strnstr(), strnstr());
    printf("strncmp() my |%|, real |%|\n",ft_strncmp(), strncmp());
    printf("atoi() my |%|, real |%|\n",ft_atoi(), atoi());
    printf("isalpha() my |%|, real |%|\n",ft_isalpha(), isalpha());
    printf("isdigit() my |%|, real |%|\n",ft_isdigit(), isdigit());
    printf("isalnum() my |%|, real |%|\n",ft_isalnum(), isalnum());
    printf("isascii() my |%|, real |%|\n",ft_isascii(), isascii());
    printf("isprint() my |%|, real |%|\n",ft_isprint(), isprint());
    printf("toupper() my |%|, real |%|\n",ft_toupper(), toupper());
    printf("tolower() my |%|, real |%|\n",ft_tolower(), tolower());
    return (0);
}