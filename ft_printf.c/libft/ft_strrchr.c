/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:19:43 by fvieira-          #+#    #+#             */
/*   Updated: 2023/05/15 17:43:48 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	car;
	char	*str;
	int		size;

	size = ft_strlen(s);
	car = c;
	str = (char *)s;
	while (size >= 0)
	{
		if (str[size] == car)
		{
			return (str + size);
		}
		size --;
	}
	return (NULL);
}
