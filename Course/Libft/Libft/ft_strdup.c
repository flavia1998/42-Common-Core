/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:24:23 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/14 17:34:21 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *new_str;
	char *str = (char*) s;
	int size;
	
	size = ft_strlen(str);
	new_str = (char*)malloc(sizeof(char)*size+1);
	new_str = ft_strcpy(new_str,str);

	return(new_str);
	
}