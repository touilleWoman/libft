#include "libft.h"

void	ft_lstdel(t_list **alst, void(*del)(void *, size_t))
{
	ft_lstdelone(&((*alst)->next), del);
	ft_lstdelone(alst, del);

}