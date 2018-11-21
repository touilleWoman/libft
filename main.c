#include "libft.h"

int main()
{
	char str[] = "Je suis une pomme."; 
	printf("\nBefore memset(): %s---\n", str);

	ft_memset(str, '?', 5);
	printf("After memset():  %s\n", str);
	return 0;
}