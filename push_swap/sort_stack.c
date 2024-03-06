#include "push_swap.h"

int is_stack_sorted(stacks_t *stacks)
{
    stack_t *aux;
    aux = stacks->stack_a;

    while (aux)
    {
        if (aux->next && aux->number > aux->next->number)
        {
            return 0;
        }
        aux = aux->next;
    }
    return 1;
}

void sort_stack(stacks_t *stacks)
{
    if ((stacks->stack_a->next == NULL))
        return;

    if (is_stack_sorted(stacks) == 1)
    {
        printf("Stack already sorted ignoring...");
        return;
    }

    int nodesCount = count_nodes(stacks->stack_a);
    if (nodesCount == 2)
    {
        ra(stacks);

        return;
    }


    pb(stacks);
    pb(stacks);
}