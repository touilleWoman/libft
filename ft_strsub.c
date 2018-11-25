#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (s == 0)
	{
		return (0);
	}
	ptr = (char*)malloc(sizeof(char)*(len + 1));
	if (ptr == 0)
	{
		return (0);
	}
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}