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

static int		lenth(long long n)
{
	int		len;

	len = 0;
	if (n == 0)
	{
		return (1);
	}
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

char	*ft_itoa(int x)
{
	int		len;
	char	*ptr;
	int		count;
	int		neg;
	long long	n;

	// if (n == -2147483648) 
	// {
	// 	ptr = (char*)malloc(sizeof(char) * (len + 1));
	// 	if (ptr == 0)
	// 		return (NULL);
	// 	strcpy(ptr, "-2147483648");
	// 	return(ptr)
	// }

	n = x;
	len = lenth(n);
	ptr = (char*)malloc(sizeof(char) * (len + 1));
	if (ptr == 0)
		return (NULL);
	neg = 0;
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	ptr[len] = '\0';
	count = 1;
	while (1)
	{
		ptr[len - count] = n % 10 + '0';
		n = n / 10;
		count++;
		if (n == 0)
			break;
	}
	if (neg == 1)
		ptr[0] = '-';
	return (ptr);
}
