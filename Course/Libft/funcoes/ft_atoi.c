 int ft_atoi(const char *nptr)
{
    int i;
    int result;
    int sign;

    result = 0;
    i = 0;
    sign = 1; 
    
    if (nptr[0] == '-')
    {
        sign = -1;
        i++;
    }
    if (nptr[0] == '+')
    {
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }

    return sign * result;
    
}
