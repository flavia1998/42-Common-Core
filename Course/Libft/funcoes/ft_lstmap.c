#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *temp_node;

    if (lst == NULL || f == NULL || del == NULL)
        return (NULL);

    new_list = ft_lstnew(f(lst->content));
    temp_node = new_list;
    while (lst->next != NULL)
    {
        lst = lst->next;
        temp_node->next = ft_lstnew(f(lst->content));
        temp_node = temp_node->next;
        if (temp_node == NULL)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
    }
    temp_node->next = NULL;
    return (new_list);
}