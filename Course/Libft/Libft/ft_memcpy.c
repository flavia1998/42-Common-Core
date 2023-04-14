/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:44:45 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/13 14:59:16 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char *s = src;
	unsigned char *d = dest;
	
	size_t	i = 0;
	while(i < n)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	
return (dest);	
}

