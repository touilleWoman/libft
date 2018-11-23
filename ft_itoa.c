/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:43:29 by jleblond          #+#    #+#             */
/*   Updated: 2018/11/23 14:43:30 by jleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		lenth(int n)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;
	int		count;
	int		neg;

	if (n == -0)
	{
		ptr = (char*)malloc(sizeof(char) * (2));
		if (ptr == 0)
			return (NULL);
		ptr[1] = '\0';
		return (ptr="0");
	}
	len = lenth(n);
	ptr = (char*)malloc(sizeof(char) * (len + 1));
	if (ptr == 0)
		return (NULL);
	if (n == -2147483648)
		return(ptr = "-2147483648");
	neg = 0;
	if (n < 0)
		n = -n;
		neg = 1;
	ptr[len] = '\0';
	count = 1;
	while (n > 0)
	{
		ptr[len - count] = n % 10 + '0';
		n = n / 10;
		count++;
	}
	if (neg == 1)
		ptr[0] = '-';
	return (ptr);
}
