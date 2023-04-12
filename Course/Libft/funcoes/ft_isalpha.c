 int ft_isalpha_l(int c)
{
		if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		{
			return (0);
		}

	return (1);
}