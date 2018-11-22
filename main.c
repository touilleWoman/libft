#include "libft.h"
#include <stdio.h>


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
	char src[] = "Je suis ddddddd .";
	char dst[] = "Il e";
	printf("befor source string is %s\n", src);
	printf("befor destination string is %s\n", dst);

	memcpy(dst, src, 20);
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

// ft_memmove
/*
int main ()
{
	//Pourquoi char src[30] = "JeSuisUnePomme"; ne marche pas ???
  char src[30] = "JeSuisUnePomme";
	printf("Before src= %s, dst= %s\n",src,(src + 5));
   ft_memmove((src+5), src, 11);
   printf("After src= %s, des= %s\n", src,(src+5));
   return(0);

	int size = 128 * 1024 * 1024;
	char *dst = (char *)malloc(sizeof(char) * size);
	char *data = (char *)malloc(sizeof(char) * size);
	//char dst2[0xF0];
	//char *data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	//int size = 0xF0 - 0xF;
	printf("After src= %s, des= %s\n", data,dst);
	memmove(dst, data, size);
	printf("After src= %s, des= %s\n", data, dst);
	return (0);
}

*/

//ft_memchr
/*
int main()
{
   const char src[]  = "IlEstUneMangue";

   printf("Before==%s\n",src);
   char *new = ft_memchr(src, 'E', 8);
 	printf("After ft_memchr new=%s\n", new);
	printf("After ft_memchr src=%s\n", src);
	char *second = memchr(src, 'E', 8);
	printf("After memchr second=%s\n", second);
	printf("After memchr src=%s\n", src);
	return 0;
}
*/
//str_memcmp
/*
int main()
{
	char s1[] = "JeSuisUnePomme";
	char s2[] = "JeSuiskkkk";
	int i =ft_memcmp(s1, s2, 5);
	printf("%d\n", i );
	int x = memcmp(s1, s2, 5);
	printf("%d\n", x);
	return 0;
}
*/


//ft_strcpy
/*
int main()
{
	char const src[] = "";
	char dst[] = "JeSuiskkkkkjl;kjlkjl";
	ft_strcpy(dst, src);
	printf("dst==%s\n", dst );

	return 0;
}
*/

//ft_strncpy
/*
0int main()
{
	char const src[] = "IlEst";
	char dst[] = "JeSuiskkkkkjl;kjlkjl";
	ft_strncpy(dst, src, 5);
	printf("dst==%s\n", dst);

	return 0;
}
*/

//ft_strcat
/*
int main()
{
	char const s2[] = "123";
	char s1[] = "JeSuiskkkkkjl;kjlkjl";
	ft_strcat(s1, s2);
	printf("dst==%s\n", s1 );
	return 0;
}
*/

//ft_strlcat.c
/*
int main()
{
	char const src[] = "12345";
	char dst[] = "abc";
	size_t x = strlcat(dst, src, 4);
	printf("dst==%s\n", dst);
	printf("x==%zu\n", x);
	return 0;
}
*/



// ft_strchr
/*
int main()
{
	char const src[] = "123453asd";


	char *new;
	new = ft_strchr(src, '3');
	printf("new==%s\n", new);
	return 0;
}
*/

//ft_strstr

int main()
{
	char const haystack[] = "MZIRIBMZIRIBMZP";
	char const	needle[] = "MZIRIBMZP";

	char *new;
	new = ft_strstr(haystack, needle);
	printf("new==%s\n", new);
	return 0;
}

//ft_strncmp.c
/*
int main()
{
	char s1[] = "4";
	char s2[] = "";
	int i =ft_strncmp(s1, s2, 20);
	printf("%d\n", i );
	int x = strncmp(s1, s2, 20);
	printf("%d\n", x );
	return 0;
}
*/