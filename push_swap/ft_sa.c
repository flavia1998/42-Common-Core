#include "push_swap.h"

void swap_first_two(stack_t **head)
{
    if (*head == NULL || (*head)->next == NULL)
        return;

    stack_t *first = *head;
    stack_t *second = (*head)->next;
    stack_t *third = second->next;

    first->next = third;
    first->prev = second;
    second->next = first;
    second->prev = NULL;

    if (third)
    {
        third->prev = NULL;
        third->prev = first;
    } else {
        first->next = NULL;
    }
    *head = second;
}