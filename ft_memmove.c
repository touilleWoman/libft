/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:32:02 by jleblond          #+#    #+#             */
/*   Updated: 2018/11/21 17:32:03 by jleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char*)malloc(len * sizeof(char));
	if (ptr == 0)
		return (0);
	ft_memcpy(ptr, src, len);
	ft_memcpy(dst, ptr, len);
	free(ptr);
	return (dst);
}
