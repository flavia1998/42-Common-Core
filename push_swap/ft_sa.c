#include "push_swap.h"

void swap_first_two(node_t **head)
{
    if (*head == NULL || (*head)->next == NULL)
        return;

    node_t *first = *head;
    node_t *second = (*head)->next;
    node_t *third = second->next;

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