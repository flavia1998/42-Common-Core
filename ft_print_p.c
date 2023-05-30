#include "ft_printf.h"

void	ft_phexa(unsigned long long n)
{
	if (n >= 16)
	{
		ft_phexa(n / 16);
		ft_phexa (n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd(n + '0', 1);
		else
			ft_putchar_fd(n - 10 + 'a', 1);
	}
}

int	ft_count_digits(unsigned long long n)
{
	int	i;

	i = 3;
	while (n >= 16)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_print_p(unsigned long long n)
{
	int	digits_value;

	digits_value = ft_count_digits (n);
	if (n == 0)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	write (1, "0x", 2);
	ft_phexa(n);
	return (digits_value);
}
// int main(void)
// {
//     int numero_hexa = 500;
//     int n = ft_printp(numero_hexa);
// }
