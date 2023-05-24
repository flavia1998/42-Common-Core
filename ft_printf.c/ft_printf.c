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

#include "libft.h"
#include <stdarg.h>

int ft_printf(const char *str, ...)
{
	va_list args; // armazenar os argumentos
	
	va_start(args, str) //inicializa a variavel que ocupa o primeiro parametro, um count ocupa o segundo para obter o numero de args
	
		



	va_end(args)	
}