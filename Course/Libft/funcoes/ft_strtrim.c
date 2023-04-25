
#include "libft.h"

int is_char_in_set(char c, const char *set)
{
	int i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return 1;
		}

		i++;
	}

	return 0;
}

char	*trim_start(char const *s1, char const *set)
{
	char *trimed_str;
	int s1_len;
	int trimed_str_len;
	int i;
	int j;

	
	s1_len = ft_strlen(s1);
	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	while (i < s1_len)
	{
		if (is_char_in_set(s1[i], set) == 0)
			break;
		i++;
	}
	if (i == s1_len)
	{
		trimed_str = (char *)malloc(sizeof(char) + 1);
		if (!trimed_str)
			return NULL;
		trimed_str[i] = '\0';
		return (trimed_str);
	}
	trimed_str_len = s1_len - (i);
	trimed_str = (char *)malloc(trimed_str_len * sizeof(char) + 1);
	if (!trimed_str)
		return (NULL);
	while (j < trimed_str_len)
	{
		trimed_str[j] = s1[i + j];
		j++;
	}
	trimed_str[j] = '\0';
	return trimed_str;
}

char	*trim_end(char const *s1, char const *set)
{
	char *trimed_str;
	int s1_len;
	int i;
	int j;
	int trimed_str_len;

	s1_len = ft_strlen(s1);
	i = s1_len - 1;
	j = 0;
	while (i >= 0)
	{
		if (is_char_in_set(s1[i], set) == 0)
			break;
		i--;
	}
	
	if (i < 1)
	{
		trimed_str = (char *)malloc(sizeof(char));
		if (!trimed_str)
			return NULL;
		trimed_str[0] = '\0';
		return (trimed_str);
	}
	trimed_str_len = i + 1;
	trimed_str = (char *)malloc(trimed_str_len * sizeof(char) + 1);
	if (!trimed_str)
		return (NULL);
	while (j < trimed_str_len)
	{
		trimed_str[j] = s1[j];
		j++;
	}
	trimed_str[j] = '\0';
	return (trimed_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	char	*s3;
	if (!s1 || !set)
		return (NULL);

	s2 = trim_start(s1, set);
	s3 = trim_end(s2, set);
	return (s3);
}

// int main(void)
// {
// 	char *strtrim;
// 	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !";
// 	strtrim = ft_strtrim(s1, " \n\t");

// 	printf("%s", strtrim);

// 	return 0;
// }