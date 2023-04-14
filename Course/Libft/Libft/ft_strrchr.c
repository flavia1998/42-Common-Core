/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:19:43 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/14 12:27:23 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c)
{
	char car = c;
	char *s = (char*) str;
	int	size = ft_strlen(str);

	while(size > 0)
	{
		if (s[size] == car)
		{
			return (s + size);
		}
		size --;
	}

	return NULL;
}