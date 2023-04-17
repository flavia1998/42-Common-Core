

#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    void *new_array;
    if (nitems == 0 || size == 0 )
    {
        return (NULL);
    }
   
    new_array = malloc (nitems * size);
    ft_bzero(new_array,size);
    return (new_array);

}

