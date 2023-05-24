/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:49:26 by fvieira-          #+#    #+#             */
/*   Updated: 2023/05/15 17:50:06 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	t_src;
	unsigned int	i;

	t_src = 0;
	i = 0;
	while (src[t_src] != '\0')
	{
		t_src ++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size -1))
		{
			dst[i] = src [i];
			i ++;
		}
		dst[i] = '\0';
	}
	return (t_src);
}
