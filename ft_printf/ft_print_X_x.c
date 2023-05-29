#include "ft_printf.h"

int	len_hexa(unsigned int n)
{
	int	i;

	i = 0;
	while (n >= 16)
	{
		n /= 16;
		i++;
	}
	i++;
	return (i);
}
void ft_converthexa(unsigned int n, const char c)
{
    if (n >= 16)
    {
        ft_converthexa(n / 16, c);
        ft_converthexa (n % 16, c);
    }
    else
    {
        if (n <= 9)
            ft_putchar_fd(n + '0', 1);
        else
        {
            if (c == 'x')
                ft_putchar_fd(n - 10 + 'a', 1);
            else if (c == 'X')
                ft_putchar_fd(n - 10 + 'A', 1);
        }
    }
}

int ft_print_X_x(unsigned int n, char c)
{
    ft_converthexa(n,c);
    return (len_hexa(n));
}

// int main(void)
// {
//     int numero_hexa = 500;
//     char c = 'X';
//     int hexa = ft_printhexa(numero_hexa,c);
// }
