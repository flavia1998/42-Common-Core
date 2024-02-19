/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:37:22 by fvieira-          #+#    #+#             */
/*   Updated: 2024/02/19 17:01:26 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

node_t	*swap_first_two(node_t *head)
{
	node_t *aux;

	int pos1;
	int pos2;
	node_t *first = head;
	node_t *second = head->next;

	pos1 = 0;
	pos2 = 1;
	aux = head;
	int i = 0;

	while (aux != NULL)
	{
        if (i == pos1)
            first->next = aux;
        if (i == pos2)
            second = aux;

        aux = aux->next;
        i++;
    }
	return second;

}