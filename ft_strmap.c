/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:08:52 by jleblond          #+#    #+#             */
/*   Updated: 2018/11/23 18:08:56 by jleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	int		i;

	if (s == 0)
		return (0);
	ptr = (char*)malloc(sizeof(size_t) * (strlen(s) + 1));
	if (ptr == 0)
	{
		return (0);
	}
	i = 0;
	while (s[i] !=0)
	{
		ptr[i] = (*f)(s[i]);
		i++;
	}
	ptr[i] = 0;
	return(ptr);
}
