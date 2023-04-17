/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:50:34 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/14 17:38:22 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
	//memmove
//    const char src1[50] = "Ana Juliana Maria";
//    char dest2[50] = "Maria";
//    int n1 = 9;
//    printf("Before memcpy dest = %s\n", dest2);
//    ft_memmove(dest, src, n);
//    printf("After memcpy dest = %s\n", dest2);

//strlcat

//   char src[50] = "Ana Juliana Maria";
//    char dest[50] = "Maria";
//    int nu = ft_strlcat(dest, src, 9);
//    printf("%d\n", nu);

//strchr

// 	char str[] = "mariana";
//    char ch = 'a';
//    char *ret;

//    ret = ft_strchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);

//strrchr

//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;

//    ret = strrchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);


//memchr
// const char str[] = "http://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;

//    ret = memchr(str, ch, 4);

//    printf("String after |%c| is - |%s|\n", ch, ret);


//memcmp

//  char str1[15];
//    char str2[15];
//    int ret;

//    ft_memcpy(str1, "abc", 6);
//    ft_memcpy(str2, "abcd", 6);

//    ret = ft_memcmp(str1, str2, 5);

//    if(ret > 0) {
//       printf("str2 is less than str1");
//    } else if(ret < 0) {
//       printf("str1 is less than str2");
//    } else {
//       printf("str1 is equal to str2");
//    }


//strdup

/*char src[10] ="ana";
char *dest;
dest = ft_strdup(src);
printf("%s",dest); */


//calloc

  /*int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)ft_calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }*/ 

   // strnstr

    const char *largestring = "Foo Bar Baz";
	   const char *smallstring = "Bar";
	   char	*ptr;

	   ptr = ft_strnstr(largestring, smallstring, 4);
       printf("%s",ptr);

    
     return(0);

 }