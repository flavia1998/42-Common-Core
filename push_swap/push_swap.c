#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int number;

	i = 1;
	if (argc < 2)
		return 0;
	if (check_arguments_repeat(argc, argv) == 1)
		ft_printf("You have reapeted numbers");
	while (i < argc)
	{
		number = ft_atoi(argv[i]);
		creat_node(number);
		i++;
	}

	return 0;
}
