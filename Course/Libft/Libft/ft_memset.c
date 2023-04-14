/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:47:02 by fvieira-          #+#    #+#             */
/*   Updated: 2023/04/13 14:47:03 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)

{
    unsigned char y = (unsigned char)c;
    unsigned char *name = s;
    size_t i;

    i = 0;
    while (name[i] != '\0' && i < n)
    {
        name[i] = y;
        i++;
    }
return name;
  
}

/* int main()
{
    char s[15] = "sou lindo";
    int c = 65;
    size_t n = 5;
    ft_memset(s, c, n);
    printf("%s\n", s);
    char a[15] = "sou lindo";
    int h = 65;
    size_t l = 5;
    memset(a, h, l);
    printf("%s", a);
    return 0;
}
 */