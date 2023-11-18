/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:16:32 by fvieira           #+#    #+#             */
/*   Updated: 2023/06/28 15:01:45 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	if (c == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *left_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!left_str)
	{
		left_str = (char *)malloc(1 * sizeof(char));
		left_str[0] = '\0';
	}
	if (!left_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(left_str) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (left_str)
		while (left_str[++i] != '\0')
			str[i] = left_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(left_str) + ft_strlen(buff)] = '\0';
	free(left_str);
	return (str);
}

char	*extract_line(char *str)
{
	int		i;
	char	*block;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	block = (char *)malloc(sizeof(char) * (i + 2));
	if (!block)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		block[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		block[i] = str[i];
		i++;
	}
	block[i] = '\0';
	return (block);
}

char	*extract_line_rest(char *block)
{
	char	*rest;
	int		i;
	int		j;

	i = 0;
	while (block[i] && block[i] != '\n')
		i++;
	if (!block[i])
	{
		free(block);
		return (NULL);
	}
	rest = (char *)malloc(sizeof(char) * (ft_strlen(block) - i + 1));
	if (!rest)
		return (NULL);
	i++;
	j = 0;
	while (block[i])
		rest[j++] = block[i++];
	rest[j] = '\0';
	free(block);
	return (rest);
}
