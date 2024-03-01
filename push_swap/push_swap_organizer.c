#include "push_swap.h"

// void implement_algorit(stack_t *n_nodes)
// {
//     if (count_nodes(n_nodes) <= 3)
//     {

//     }else
//     {

//     }

// }
int check_list_sort(stacks_t *stacks)
{
    stack_t *aux;
    aux = stacks->stack_a;

    while (aux)
    {
        if (aux > aux->next)
        {
            return 0;
        }
        
        aux = aux->next;
    }

    return 1;
    
}


void organized_three_numbers(stacks_t *stacks)
{
    if (stacks->stack_a->next == NULL)
        return;

    if (stacks->stack_a->number < stacks->stack_a->next->number)
        {
            sa(stacks);
        }
}
 