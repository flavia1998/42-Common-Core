/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:52:30 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/14 11:17:31 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char *str, int c)
{
		char	*s = (char*) str;
		char	car =(char) c;
	
	while(*s != '\0')
	{
		if(*s == car)
		{
			return s;
		}
		s++;
	}
	return (NULL);
}