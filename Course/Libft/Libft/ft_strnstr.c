/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:57:22 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/14 15:14:22 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    int	i;
	int	j;

	j = 0;
	i = 0;
	while(big[i] != '\0' && i < len)
	{
		while (little[j] != '\0')
		{
			if (big[i] == little[j])
			{
				return little;
			}
			j++;
		}
		i++;
	}

	
	
}
