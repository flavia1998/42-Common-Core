
#include "libft.h"

int    break_local(char const *s, char c)
{
    char    *str;
    int     i;

    str = (char *)s;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        { 
            break;
        }
       i++;
    }
    return (i+1);
}

char    **ft_split(char const *s, char c)
{
    int     b_local;
    char    *str;
    char    *new_str;
    int      i;

    i = 0;
    str =(char *)s;
    b_local = break_local(s,c);

    new_str = (char *)malloc(b_local*(sizeof(char ) + 1));
    if (new_str == NULL)
        return NULL;
    ft_strlcpy(new_str,str,b_local);
    return *new_str;
}

int main(void)
{
    char s[50] = "flavia andreia vieira pinto";
    char c = 'f';
    char *new;
    new = ft_split(s,c);
    printf("%s",new);
    return 0;
}