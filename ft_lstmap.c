#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*ptr;


	ret = ft_lstcpy(lst);
	ptr = ret;
	while (ptr != NULL)
	{
		(*f)(ptr);
		ptr = ptr->next;
	}
	return (ret);
}
