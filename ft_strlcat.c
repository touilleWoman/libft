/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:48:09 by jleblond          #+#    #+#             */
/*   Updated: 2018/11/22 14:48:10 by jleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	y;
	int		len;

	len = ft_strlen(dst);
	y = 0;
	x = len;
	while ((src[y] != 0) && (y < size - len - 1 ))
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	dst[x] = 0;
	return (x);
}

