
#include "libft.h"

int    count_delimiter(char const *s, char c)
{
    char    *str;
    int     i;
    int     j;

    str = (char *)s;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        { 
            j++;
        }
       i++;
    }
    return (j);
}

char    **ft_split(char const *s, char c)
{
    int     delimiter_count;
    char    *delimited_str;
  
    delimiter_count = count_delimiter(s,c);
    delimited_str = (char *)malloc( (delimiter_count * sizeof(char)) + 2);
    if (delimited_str == NULL)
        return NULL;
    ft_strlcpy(new_str,str,b_local);
    return new_str;
}

// int main(void)
// {
//     char s[50] = "flavia andreia vieira pinto";
//     char c = ' ';
//     char *new_array;
//     new_array = split_strs(s,c);
//     printf("%s",new_array);
// }