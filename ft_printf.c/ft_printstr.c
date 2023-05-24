/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:33:07 by fvieira-          #+#    #+#             */
/*   Updated: 2023/05/24 16:05:31 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printstr(char *str)
{
	int	i;
	i = 0;
	if (!str)
	{
		write(1,"(null)",6);
		return (6);
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

// int main()
// {
// 	char name[10] = "maria";

// 	int i = print_str(name);
// 	printf("%d",i);
// }