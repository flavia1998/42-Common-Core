#include "ft_printf.h"

int	number_digits(unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*trans_string(unsigned int n)
{
	char *str;
	int len;

	len = number_digits(n + 1);
	str = (char*)malloc(len + 1);
	if (!str)
		return (NULL);
	while (len > 0)
	{
		len --;
		str[len] = (n % 10) + 48;
		n = (n / 10);
	}
	return (str);
}

int ft_print_u(unsigned int n)
{
	char *wstr;
	int	i;

	i = 0;
	wstr = trans_string(n);
	if (!wstr || wstr[i] == '\0')
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (wstr[i] != '\0')
	{
		write (1, &wstr[i], 1);
		i++;
	}
	free (wstr);
	return (i);
}

// int main(void)
// {
//     int numero = 0;
// 	int o = ft_print_u(numero);
// 	printf ("\n");

//    printf("%u\n",numero);
// 	return 0;
// }
