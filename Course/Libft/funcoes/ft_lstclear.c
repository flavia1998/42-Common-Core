#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (lst == NULL || *lst == NULL || del == NULL)
    {
        return;
    }

    t_list *aux;
    while (lst != NULL && *lst != NULL)
    {
        aux = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = aux;
    }
}