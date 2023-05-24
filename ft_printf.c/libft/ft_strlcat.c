/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:46:47 by fvieira-          #+#    #+#             */
/*   Updated: 2023/05/15 17:42:57 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;
	const char		*s;

	s = src;
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(s);
	i = len_dest;
	j = 0;
	if (size <= len_dest)
		return (size + len_src);
	while (s[j] != '\0' && i < (size - 1))
	{
		dst[i] = s[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dest + len_src);
}
