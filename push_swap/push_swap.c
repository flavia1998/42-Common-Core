#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc <= 1)
    {
        ft_printf("You put more than 1 arg");
    }

    if (check_arguments_repeat(argc,argv) == 1)
    {
        ft_printf("You repeated numbers!");
    }
    
	
    

    return 0;
}

