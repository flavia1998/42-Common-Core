
 int ft_isalnum_l(int c)
{
		if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z')
		&& (c < '0' || c > '9'))
		{
			return (0);
		}

	return (1);
}

