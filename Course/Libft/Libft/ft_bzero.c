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
#include <strings.h>

void ft_bzero(void *s, size_t n)
{

	size_t i;
	unsigned char *str = s;
	i = 0;
	while (i < n)
	{
		*str = 0;
		str++;
		i++;
	}
}

/*int main(void)
{
	char str[10] = "mariana";
	char dest[10];
	int n = 4;
	ft_bzero(str, n);
	printf("%s", str);
	ft_strncpy(dest, str, 6);
	printf("%s", dest);

	/*char str2[10] = "mariana";
	int n2 = 10;
	bzero(str2, n2);
	printf("%s", str2);
	return 0;
}*/
