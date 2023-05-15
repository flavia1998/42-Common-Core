#include "libft.h"

void print_content(void* content){
    printf("Content is: %s\n", (char *)content);
}

int main()
{
    t_list *list;
    int size;
    char content1[10] = {"initial"};
    char content2[10] = {"front"};
    char content3[10] = {"back"};

    t_list *node_front;
    t_list *node_back;

    list = ft_lstnew(content1);

    node_front = ft_lstnew(content2);
    ft_lstadd_front(&list, node_front);

    node_back = ft_lstnew(content3);
    ft_lstadd_back(&list, node_back);

    size = ft_lstsize(list);
    printf("The list size is: %d\n\n", size);

    ft_lstiter(list, print_content);
    return 0;
}
