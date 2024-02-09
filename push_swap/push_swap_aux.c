/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_chekers.c                                :+:      :+:    :+:   */
/* //                                                   +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:07:11 by fvieira-          #+#    #+#             */
/*   Updated: 2023/11/18 18:38:25 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_arguments_repeat(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
			{
				return 1;
			}
			j++;
		}
		i++;
	}
	return 0;
}

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