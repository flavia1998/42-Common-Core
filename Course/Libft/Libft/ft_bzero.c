/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:47:42 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/13 14:47:43 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void ft_bzero(void *s, size_t n)
{

	size_t i;
	i = 0;
	while ( i < n)
	{
		*s = 0;
		s++;
		i++;
	}
}

/*int main(void)
{
	char str[10] = "mariana";
	int n = 4;
	ft_bzero(str, n);
	printf("%s", str);
	char str2[10] = "mariana";
	int n2 = 4;
	bzero(str2, n2);
	printf("%s", str2);
	return 0;
}*/
