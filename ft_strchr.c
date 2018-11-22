/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:47:12 by jleblond          #+#    #+#             */
/*   Updated: 2018/11/22 15:47:13 by jleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
		{
			return ((char*)(s + i));
		}
		i++;
	}
	if (c == 0)
	{
		return ((char*)(s + i));
	}
	return (0);
}
