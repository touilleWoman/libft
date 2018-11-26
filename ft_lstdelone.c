#include "libft.h"

void	ft_lstdelone(t_list **alst, void(*del)(void*, size_t))
{
	(*del)(*alst->content, sizeof(t_list));
	free(*alst);
	*alst = NULL;
}
