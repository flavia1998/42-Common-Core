#include "libft.h"

int row_number(char const *s, char c)
{
    int i = 0;
    int j = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
        {
            j++;
        }
        i++;
    }
    return j;
}

char **ft_split(char const *s, char c)
{
    char **split_str;
    int i = 0;
	int start = 0;
	int end  = 0;
    int row_num = row_number(s, c);
    
    split_str = (char **)malloc((row_num + 1) * sizeof(char *));
    if (split_str == NULL)
        return NULL;
    
    while (i < row_num)
    {
		// ignore delimiter at begining
        while (s[end] == c)
            end++;

		start = end;

		// calculate end
        while (s[end] != '\0' && s[end] != c)
            end++;

		// allocate space for delimited str
        split_str[i] = (char *)malloc((end - start + 1) * sizeof(char));
        if (split_str[i] == NULL)
            return NULL;

		// copy delimited str
		ft_strlcpy(split_str[i], s + start, end - start + 1);
        i++;
    }
    
    split_str[row_num] = NULL;
    return split_str;
}

// int main(void)
// {
//     char *s = "lorem ipsum dolor sit amet";
//     char **split = ft_split(s, ' ');
//     int x = 0;
//     while (split[x] != NULL)
//     {
//         printf("%s\n", split[x]);
//         x++;
//     }
//     return 0;
// }
