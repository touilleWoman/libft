/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:03:16 by jleblond          #+#    #+#             */
/*   Updated: 2018/11/21 15:03:18 by jleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (((char*)src)[i] != (char)c))
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	if (i == n - 1)
		return (0);
	dst = &dst[i + 1];
	return (dst);
}
