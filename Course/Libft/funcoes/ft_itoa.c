
#include "libft.h"

char    *ft_itoa(int n)
{
    char    *str_num;
    int     size_digit;
    int     reverse_count;
    int     temp;

    size_digit = 0;
    temp = n;

    while (temp != 0)
    {
        size_digit++;
        temp = temp / 10; //numero de digitos atraves das vezes que dividimos
    }

    str_num = (char *)malloc((sizeof(char)) * (size_digit + 1));
    if (!str_num)
        return NULL;

    reverse_count = size_digit - 1;// desconsiderar o null
    

    while (reverse_count >= 0)
    {
        str_num[reverse_count] = (n % 10) + '0'; // 
        n = n / 10;
        reverse_count--;
    }
    str_num[size_digit] = '\0';
    return str_num;
}

// int main(void)
// {
//     int n = 20;
//     char *num;
//     num = ft_itoa(n);
//     printf("%s",num);
//     return 0;

// }

