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

int print_numbers(int numbers)
{
	int	len;
	char	*transf_num;
	int		char_num;

	transf_num = ft_itoa(numbers);
	if (transf_num == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	else
	{
		char_num = ft_printstr(transf_num);
		len = ft_strlen(transf_num);
		return (len);
	}
}

int main ()
{
	int numero = 123345;
	int nome = print_numbers(numero);
	
	return (0);
}