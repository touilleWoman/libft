/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:20:42 by jleblond          #+#    #+#             */
/*   Updated: 2018/11/26 13:20:44 by jleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
