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
	node_t *head = NULL;

	i = 1;
	if (argc < 2)
		return 0;
	if (check_arguments_repeat(argc, argv) == 1)
		ft_printf("You have reapeted numbers");
	while (i < argc)
	{
		number = ft_atoi(argv[i]);
		if (head == NULL)
		{
			head = create_node(number);
		}
		else
		{
			push_start(&head, number);
		}
		i++;
	}

	int nodes = count_nodes(head);
	ft_printf("%d", nodes);

	printf("Before: \n");
	swap_first_two(head);
	print_list(head);

	swap_first_two(&head);
	
	printf("\nAfter: \n");
	print_list(head);


	return 0;
}
