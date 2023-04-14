/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:05:27 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/13 15:48:32 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned	char	*s1; 
	unsigned	const	char	*s2; 
	size_t	i;

	i = 0;
	s1 = str1;
	s2 = str2;
	
	while(*s2 != '\0' && i < n)
	{
		*s1=*s2;
		s1++;
		s2++;
		i++;
	}

	return (str1);	
}
