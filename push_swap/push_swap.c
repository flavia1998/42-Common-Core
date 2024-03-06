/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:37:38 by fvieira-          #+#    #+#             */
/*   Updated: 2024/03/06 21:40:19 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void print_stacks(stacks_t *stacks)
{
	stack_t *aux_a = stacks->stack_a;
	stack_t *aux_b = stacks->stack_b;

	printf("-------\n");
	printf("[A]  [B]\n");
	while (aux_a || aux_b)
	{
		if (aux_a)
		{
			printf(" %d", aux_a->number);
			aux_a = aux_a->next;
		}
		else
		{
			printf("  ");
		}
		printf("    ");
		if (aux_b)
		{
			printf("%d", aux_b->number);
			aux_b = aux_b->next;
		}
		printf("\n");
	}
}

int main(int argc, char **argv)
{
	int i;
	int number;
	stacks_t *stacks = NULL;
	stacks = malloc(sizeof(stack_t));

	i = 1;
	if ( argc < 2 || check_arguments_repeat(argc, argv) == 1)
	{
		ft_printf("You have only one arg, or Reapeated numbers");
		return 0;
	}

	while (i < argc)
	{
		number = ft_atoi(argv[i]);
		if (stacks->stack_a == NULL)
		{
			stacks->stack_a = create_node(number);
		}
		else
		{
			push_end(stacks->stack_a, number);
		}

		i++;
	}

	print_stacks(stacks);

	sort_stack(stacks);

	print_stacks(stacks);

	return 0;
}
