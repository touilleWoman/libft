#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ret;

	ret = (t_list*)malloc(sizeof(t_list));
	if (!ret)
	{
		return (NULL);
	}

	if (content == NULL)
	{
		ret->content = NULL;
		ret->content_size = 0;
	}
	else
	{
		ret->content = (void*)malloc(content_size);
		if (!ret->content)
		{
			free(ret);
			return (NULL);
		}
		ft_memcpy(ret->content, content, content_size);
		ret->content_size = content_size;
	}
	ret->next == NULL;
	return (ret);
}