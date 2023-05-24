/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:57:32 by fvieira-          #+#    #+#             */
/*   Updated: 2023/05/24 16:06:25 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdarg.h>
#include "libft.h"
#include <unistd.h>

int	ft_putchar(char c);
int	ft_printstr(char *str);
int print_numbers(int numbers);



#endif