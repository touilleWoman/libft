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
	char	ptr[len + 1];
	size_t	i;

	i = 0;
	memcpy(ptr, src, len);
	memcpy(dst, ptr, len);
	return (dst);
}
