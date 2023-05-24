/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:24:23 by fvieira-          #+#    #+#             */
/*   Updated: 2023/05/15 17:23:38 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*new_str;
	char	*str;
	int		size;

	str = (char *) s;
	size = ft_strlen(str);
	new_str = (char *) malloc(sizeof(char) * size + 1);
	if (new_str == NULL)
		return (0);
	new_str = ft_strcpy(new_str, str);
	return (new_str);
}
