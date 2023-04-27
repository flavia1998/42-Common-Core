/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:36:43 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/27 16:53:30 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	number_digits(int n)
{ 
	long     size_digit;
	
	size_digit = 0;
	if (n < 0) 
	{
    	n = -n;
	}
    while (n != 0)
    {
        size_digit++;
        n = n / 10; 
	}
	size_digit++;
	return size_digit;
}

char    *ft_itoa(int n)
{
    char	*str_num;
    long	reverse_count;
	long	digits;
	long 	neg;

	neg = 0;
	digits = number_digits(n);
    str_num = (char *)malloc((sizeof(char)) * (digits + 2));
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
    reverse_count = digits - 1;
    while (reverse_count > 0)
    {
        str_num[reverse_count] = (n % 10) + '0'; 
        n = n / 10;
        reverse_count--;
    }
		if (neg)
		str_num[reverse_count] = '-';
    str_num[digits] = '\0';
    return str_num;
}

// int main()
// {
//     int n = -200;
//     char *num;
//     num = ft_itoa(n);
//     printf("%s",num);
//     return 0;
// }
