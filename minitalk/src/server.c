#include "../include/minitalk.h"

void	handle_signal(int signal, siginfo_t *info, void *context)
{
	static	int	bit;
	static	int	c;

	(void)info;
	(void)context;
    if (signal == SIGUSR1)
    {
      c = c | (1 << bit);
	   bit++;
    }
    else if (signal == SIGUSR2)
		bit++;
	if (bit == 8)
	{
		ft_printf("%c",c);
		bit = 0;
		c = 0;
	}
}

int	main(int argc, char **argv)
{
	int 					pid;
    struct sigaction		act;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	pid = getpid();
	ft_printf("%d\n", pid);
	sigemptyset(&act.sa_mask);
	act.sa_sigaction = handle_signal;
	act.sa_flags = SA_SIGINFO;
	while (argc == 1)
	{
		sigaction(SIGUSR1, &act, NULL);
		sigaction(SIGUSR2, &act, NULL);
		pause();
	}
    return 0;
}
