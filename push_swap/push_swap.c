/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:37:38 by fvieira-          #+#    #+#             */
/*   Updated: 2024/02/19 16:57:11 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int number;
	stacks_t *stacks = NULL;
	stacks = malloc(sizeof(stack_t));

	i = 1;
	if (argc < 2)
		return 0;
	if (check_arguments_repeat(argc, argv) == 1)
		ft_printf("You have reapeted numbers");
	while (i < argc)
	{
		number = ft_atoi(argv[i]);
		if (stacks->stack_a == NULL)
		{
			stacks->stack_a = create_node(number);
		}
		else
		{
			push_start(&stacks->stack_a, number);
		}
		if (stacks->stack_b == NULL)
		{
			stacks->stack_b = create_node(number);
		}
		else
		{
			push_start(&stacks->stack_b, number);
		}
		i++;
	}

	int nodes = count_nodes(stacks->stack_b);
	ft_printf("%d", nodes);

	printf("\n\n------------- Stack A ---------------\n\n");
	printf("Before: \n");
	print_list(stacks->stack_a);

	printf("\n\n------------- Stack B ---------------\n\n");

	printf("Before: \n");
	print_list(stacks->stack_b);

	rrr(stacks);

	printf("\n\n------------- Stack A ---------------\n\n");

	printf("\nAfter: \n");
	print_list(stacks->stack_a);

	printf("\n\n------------- Stack B ---------------\n\n");

	printf("\nAfter: \n");
	print_list(stacks->stack_b);


	

	return 0;
}
