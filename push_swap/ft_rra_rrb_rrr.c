#include "push_swap.h"

void rra(stacks_t *stack)
{
    stack_t *last_element;
    stack_t *before_last_element;

    last_element = stack->stack_a;

    while (last_element->next)
    {
        last_element = last_element->next;
        if (last_element->next != NULL)
            before_last_element = last_element;
    }

    last_element->next = stack->stack_a;
    stack->stack_a = last_element;
    before_last_element->next = NULL;
}

void rrb(stacks_t *stack)
{
    stack_t *last_element;
    stack_t *before_last_element;

    last_element = stack->stack_b;

    while (last_element->next)
    {
        last_element = last_element->next;
        if (last_element->next != NULL)
            before_last_element = last_element;
    }

    last_element->next = stack->stack_b;
    stack->stack_b = last_element;
    before_last_element->next = NULL;
}

void rrr(stacks_t *stack)
{
    rra(stack);
    rrb(stack);
}