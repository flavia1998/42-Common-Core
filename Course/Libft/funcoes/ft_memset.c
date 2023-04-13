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
