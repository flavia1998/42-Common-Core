/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:16:32 by fvieira           #+#    #+#             */
/*   Updated: 2023/08/16 17:53:59 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_block(int fd, char *buffer)
{
	int		bytes_read;
	char	*temp;

	temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temp)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(buffer, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(temp);
			free(buffer);
			return (NULL);
		}
		temp[bytes_read] = '\0';
		buffer = ft_strjoin(buffer, temp);
	}
	free(temp);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char		*buffer;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_block(fd, buffer);
	if (!buffer)
		return (NULL);
	line = extract_line(buffer);
	buffer = extract_line_rest(buffer);
	return (line);
}

// int main()
// {
// 	int fd;		
// 	char *line; 
// 	int line_count;
// 	line_count = 0;
// 	fd = open("file1.txt", O_RDONLY); 
// 	fd = open("file1.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	lin= get_next_line(fd);
// 	printf("Line %d: %s", line_count, line);
// 	printf("Line %d: %s", line_count, lin);
// 	while (line)
// 	{
// 		printf("Line %d: %s", line_count, line);
// 		line_count++;
// 		line = get_next_line(fd);
// 	}
// 	close(fd); 
// 	return 0; 
// }
