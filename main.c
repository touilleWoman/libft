#include "libft.h"



//ft_memset
/*
int main()
{
	char str[] = "Je suis une pomme.";
	printf("\nBefore memset(): %s---\n", str);

	ft_memset(str, '?', 5);
	printf("After memset():  %s\n", str);
	return 0;
}
*/


//ft_bzero
/*
int main()
{
	char str[] = "Je suis une pomme.";
	printf("\nBefore ft_bzero(): %s---\n", str);

	ft_bzero(str, 1);
	printf("After ft_bzero: %c\n", str[0]);
	bzero(str, 1);
	printf("after bzero: %c\n", str[0]);
	return 0;
}
*/


//ft_memcpy
/*
int		main()
{
	char src[] = "Je suis .";
	char dst[] = "Il est une pomme";
	printf("befor source string is %s\n", src);
	printf("befor destination string is %s\n", dst);

	ft_memcpy(dst, src, 20);
	printf("after source string :%s\n", src);
	printf("after :%s\n", dst);
	return 0;
}
*/

//ft_memccpy
/*
int		main()
{
	char src[] = "Jesuisabbbb .";
	char dst[] = "Ilestunepomme";
	char *new;
	printf("befor source string ==%s\n", src);
	printf("befor destination string ==%s\n", dst);

	new = ft_memccpy(dst, src, '?', 10);
	printf("new==%s\n", new);
	printf("after dst==%s\n",dst);
	return 0;
}
*/
/*
// ft_memmove
int main () {
   char dest[] = "JeSuisUnePomme";
   const char src[]  = "IlEstUneMangue";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 5);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
*/