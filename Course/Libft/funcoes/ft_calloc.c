/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:53:11 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/19 12:23:26 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*new_array;

	if (nitems == 0 || size == 0)
		return (NULL);
	new_array = malloc(nitems * size);
	ft_bzero(new_array, size * nitems);
	return (new_array);
}
