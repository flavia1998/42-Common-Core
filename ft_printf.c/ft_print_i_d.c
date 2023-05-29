/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:39:52 by fvieira-          #+#    #+#             */
/*   Updated: 2023/05/24 16:04:35 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printnumbers(int numbers)
{
	char	*transf_num;
	int		count;

	transf_num = ft_itoa(numbers);
	if (transf_num == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	else
	{	
		while (transf_num[count] != '\0')
		{
			write (1, &transf_num[count], 1),
			count++;
		}
		return (count);
	}
}

// int main (void)
// {
// 	int numero = 2147483647;
// 	int nome = ft_printnumbers(numero);
	
// 	return (0);
// }