/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:24:15 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/28 17:48:33 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-');
		ft_putchar_fd('2');
		ft_putnbr_fd(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-');
		nb = -nb;
		ft_putnbr_fd(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10);
		ft_putnbr_fd(nb % 10);
	}
	else
		ft_putchar_fd(nb + 48);
}
