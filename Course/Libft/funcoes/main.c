/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:50:34 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/20 14:54:52 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{


	//ft_isdigit 
	
	// char c;
    // c='5';
    // printf("Result when numeric character is passed: %d", ft_isdigit(c));
    // c='+';
    // printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));

	//memmove
	
	//const char *src1 = "lorem ipsum dolor sit amet";
	//    char *dest2;
	//    int n1 = 8;
	//    ft_memmove(dest2, src1, n1);
	//    printf("After memcpy dest = %s\n", dest2);

//strlcat

//   char src[50] = "Ana Juliana Maria";
//    char dest[50] = "Maria";
//    int nu = ft_strlcat(dest, src, 9);
//    printf("%d\n", nu);

//strchr

	// char str[] = "bonjour";
    // int c = 97;
	// char *ret;
    // ret = ft_strchr(str, c);
    // printf("%s", ret);
	

//strrchr

//const char str[] = "bonjour";
//const char ch = 'o';
//char *ret;
//ret = ft_strrchr(str, ch);
//printf("String after |%c| is - |%s|\n", ch, ret);


//memchr

// const char str[] = "http://www.tutorialspoint.com";
// const char ch = '.';
//char *ret;
//ret = memchr(str, ch, 4);
//printf("String after |%c| is - |%s|\n", ch, ret);


//memcmp

//char str1[15];
//char str2[15];
//int ret;
//ft_memcpy(str1, "abc", 6);
//ft_memcpy(str2, "abcd", 6);
//ret = ft_memcmp(str1, str2, 5);


//memcpy
// const char src[50] = "http://www.tutorialspoint.com";
//    char dest[50];
//    strcpy(dest,"Heloooo!!");
//    printf("Before memcpy dest = %s\n", dest);
//    ft_memcpy(dest, src, strlen(src)+1);
//    printf("After memcpy dest = %s\n", dest);

//strdup

// char src[10] ="ana";
// char *dest;
// dest = ft_strdup(src);
// printf("%s",dest);

// strnstr
// (void)argc;
// char big [50] = "ANA JOANA MARGARIDA";
// // char little [50] ="JA";
// char *substr = ft_strnstr(big, argv[1],20);
//  printf("%s\n",substr);

//memset 
    // char s[15] = "sou lindo";
    // int c = 65;
    // size_t n = 5;
    // ft_memset(s, c, n);
    // printf("%s\n", s);
	
    // char a[15] = "sou lindo";
    // int h = 65;
    // size_t l = 5;
    // memset(a, h, l);
    // printf("%s\n", a);
	
	//isprint 
	// char c;

    // c = 'Q';
    // printf("Result when a printable character %c is passed to isprint(): %d", c, ft_isprint(c));

    // c = '\n';
    // printf("\nResult when a control character %c is passed to isprint(): %d", c, ft_isprint(c));

	//strncmp
// 	 char str1[15];
//    char str2[15];
//    int ret;

//    strcpy(str1, "abcdef");
//    strcpy(str2, "ABCDEF");

//    ret = ft_strncmp(str1, str2, 4);
//    printf("%d\n",ret);

   

return(0);
}