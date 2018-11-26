/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 12:49:21 by jleblond          #+#    #+#             */
/*   Updated: 2018/11/26 12:49:40 by jleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		tell_num_of_str(char const *s, char c)
{
	int		i;
	int		num_str;

	i = 0;
	num_str = 0;
	while (s[i] != 0)
	{
		if ((s[i] != c) && (s[i] != 0))
		{
			while ((s[i] != c) && (s[i] != 0))
			{
				i++;
			}
			num_str++;
			i--;
		}
		i++;
	}
	return (num_str);
}

static int		start(char const *s, char c, int index)
{
	while (s[index] != 0)
	{
		if (s[index] != c)
		{
			return (index);
		}
		index++;
	}
	return (0);
}

static int		sub_str_len(char const *s, char c, int start_point)
{
	int		len;

	len = 0;
	while ((s[start_point] != c) && s[start_point] != '\0')
	{
		len++;
		start_point++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**pptr;
	int		num_str;
	int		y;
	int		len;
	int		start_point;
	int		x;

	if (!s)
		return (0);
	num_str = tell_num_of_str(s, c);
	pptr = (char**)malloc(sizeof(char*) * (num_str + 1));
	if (pptr == 0)
		return (0);
	y = 0;
	start_point = 0;
	while (y < num_str)
	{
		start_point = start(s, c, start_point);
		len = sub_str_len(s, c, start_point);
		pptr[y] = (char*)malloc(sizeof(char) * (len + 1));
		while (x < len)
		{
			pptr[y][x] = s[start_point];
			x++;
			start_point++;
		}
		pptr[y][x] = '\0';
		x = 0;
		y++;
	}
	pptr[y] = 0;
	return (pptr);
}
