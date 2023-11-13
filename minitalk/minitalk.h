#ifndef MINITALK_H
# define MINITALK_H
# define _GNU_SOURCE

# include "ft_printf/ft_printf.h"
# include <execinfo.h>
# include <signal.h>

void	sig_send(int pid, char c);
void	handle_signal(int signal, siginfo_t *info, void *context);


# endif 