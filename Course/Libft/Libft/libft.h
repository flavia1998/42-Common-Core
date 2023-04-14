/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:00:35 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/14 17:34:40 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h> 
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

//is
int	ft_isalnum_l(int c);
int	ft_isalpha_l(int c);
int	ft_isascii(int c);
int	ft_isdigit_l(int c);
int	ft_isprint_l(int c);
//str
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strcpy(char *dest, char *src);


//memory
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *s);

//convert to 
int	ft_tolower_l(int c);
int	ft_toupper_l(int c);
int	ft_atoi(const char *nptr);

#endif