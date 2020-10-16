#include "source/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%d ", arr[i]); 
} 

int main(int argi, char *argc[])
{
    int i;
    char a[] = "Hello world", b[] = "o";
    i = 0;

    int ar[10];

    printf("ft_strncmp is %i\n", ft_strncmp(a, b, 5));
    //printf("ft_atoi is %i real atoi is %i\n", ft_atoi(argc[argi - 1]), atoi(argc[argi - 1]));
    printf("ft_memset is %s, memset is %s\n", (char *)ft_memset(&a, 'a', 3), (char *)memset(&b, 'a', 3));
    printf("ft_memset is %i, memset is %i\n", *((int *)ft_memset(ar, 2, 3)), *((int *)memset(ar, 2, 3)));
    printf("a - %i, 1 - %i, * - %i\n", ft_isalpha('a'), ft_isalpha('1'), ft_isalpha('*'));
    printf("ft_strnstr is %s\n", ft_strnstr("Hello my world", "my", 2));

    int n = 10; 
    int arr[n]; 
  
    // Fill whole array with 0. 
    ft_memset(arr, 0, n*sizeof(arr[0]));
    printf("Array after memset()\n"); 
    printArray(arr, n); 
    char ab[] = "Hello world";
    ft_bzero(ab, 2);
    printf("Array after bzero() %c%c%c%c\n", ab[0], ab[1], ab[2], ab[3]);
    char csrc[100] = "Geeksfor"; 
   ft_memmove(csrc+5, csrc, strlen(csrc)+1); 
   printf("%s", csrc); 
   return 0; 
}