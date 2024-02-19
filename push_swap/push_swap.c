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
	
	printf("Before: \n");
	print_list(head);

	swap_first_two(&head);
	
	printf("\nAfter: \n");
	print_list(head);


	return 0;
}
