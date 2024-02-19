/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_aux_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:41:45 by fvieira-          #+#    #+#             */
/*   Updated: 2024/02/19 16:42:18 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

node_t *create_node(int number)
{
	node_t *new_node;
	new_node = (node_t *)malloc(sizeof(node_t));
	new_node->number = number;
	new_node->next = NULL;

	return new_node;
}

void push_start(node_t **head, int number)
{
	if (head == NULL)
	{
		ft_printf("Linked list not initialized, error!\n");
		return;
	}

	node_t *new_node;
	new_node = create_node(number);

	new_node->next = *head;
	(*head)->prev=new_node;
	*head = new_node;
}

void push_end(node_t *head, int number)
{
	if (head == NULL)
	{
		ft_printf("Linked list not initialized, error!\n");
		return;
	}

	node_t *new_node;
	new_node = create_node(number);

	node_t *aux = head;
	while (aux->next)
	{
		aux = aux->next;
	}

	aux->next = new_node;
}

void print_list(node_t *head)
{
	node_t *aux = head;

	while (aux)
	{
		printf("%d\n", aux->number);
		aux = aux->next;
	}
}

node_t *pop(node_t **head){
	if (head == NULL)
	{
		ft_printf("Linked list not initialized, error!\n");
		return NULL;
	}

    node_t *removed_node = *head;
    *head = (*head)->next;

    return removed_node;
}