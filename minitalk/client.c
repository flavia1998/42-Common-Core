#include "minitalk.h"

void	sig_send(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (c & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i =	0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			sig_send(pid, argv[2][i]);
			i++;
		}
		sig_send(pid, '\0');
	}
	else
	{
		ft_printf("Error\n");
		return (1);
	}
	sig_send(pid, '\n');
	return 0;
}
