/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:09:51 by fvieira-          #+#    #+#             */
/*   Updated: 2023/05/24 14:59:40 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int calling_funtions(va_list args, char c)
{
	if (c == 'c')
		return (ft_print_c(va_arg(args, int)));
	if (c == 's')
		return (ft_print_s(va_arg(args, char *)));
	if (c == 'i' || c == 'd')
		return (ft_print_i_d(va_arg(args, int)));
	if (c == 'p')
		return (ft_print_p(va_arg(args, unsigned long long)));
	if (c == 'X' || c == 'x')
		return (ft_print_X_x(va_arg(args, unsigned int), c));
	if (c == 'u')
		return (ft_print_u(va_arg(args, unsigned int)));
	if (c == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}

int ft_printf(const char *str, ...)
{
	va_list args;
	va_start(args, str);

	int total_param;
	int i;

	total_param = 0;
	i = 0;

	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			total_param = total_param + calling_funtions(args, str[i]);
		}
		else
		{
			ft_putchar_fd((char) str[i], 1);
			total_param++;
		}
		i++;
	}
	va_end(args);
	return (total_param);
}

