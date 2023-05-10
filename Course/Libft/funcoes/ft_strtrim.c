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

int get_start_index(char const *s1, char const *set)
{
	int i;
	i = 0;

	while (s1[i] != '\0')
	{
		if (is_char_in_set(s1[i], set) == 0)
			return i;
		i++;
	}

	return -1;
}

int get_end_index(char const *s1, char const *set)
{
	int i;
	int s1_len;

	s1_len = ft_strlen(s1);
	i = s1_len - 1;
	while (i >= 0)
	{
		if (is_char_in_set(s1[i], set) == 0)
			return i;
		i--;
	}

	return -1;
}

char *ft_strtrim(char const *s1, char const *set)
{
	int start_index;
	int end_index;
	char *result;

	if (!s1 || !set)
		return (NULL);

	start_index = get_start_index(s1, set);
	end_index = get_end_index(s1, set);

	if (start_index < 0 || start_index > end_index)
	{
		char *empty_string;
		if (!(empty_string = (char *)malloc(sizeof(char))))
			return (NULL);
		empty_string[0] = '\0';

		return (empty_string);
	}

	result = (char *)malloc(sizeof(char) * (end_index - start_index + 2));
	if (!result)
		return (NULL);

	ft_strlcpy(result, &s1[start_index], end_index - start_index + 2);

	return (result);
}

// int main(void)
// {
// 	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";

// 	char *ret = ft_strtrim(s1, " \n\t");
// 	printf("%s", ret);
// 	if (ret == ((void *)0))
// 		printf("SUCCESS");
// 	else
// 		printf("FAILED");

// 	return 0;
// }
