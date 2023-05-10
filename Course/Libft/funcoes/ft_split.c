#include "libft.h"

int	row_number(char const *s, char c)
{
    int i;
    int j;

	i = 0;
	j = 0;
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

char	**ft_split(char const *s, char c)
{
    char	**split_str;
    int		i;
	int		start;
	int		end;

	i = 0;
	start = 0;
	end = 0;
    if (!(split_str = (char **)malloc((row_number(s, c) + 1) * sizeof(char *))))
        return NULL;
    while (i < row_number(s, c))
    {
        while (s[end] == c)
            end++;
		start = end;
        while (s[end] != '\0' && s[end] != c)
            end++;
        if (!(split_str[i] = (char *)malloc((end - start + 1) * sizeof(char))))
            return NULL;
		ft_strlcpy(split_str[i], s + start, end - start + 1);
        i++;
    }
    split_str[row_number(s, c)] = NULL;
    return (split_str);
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
