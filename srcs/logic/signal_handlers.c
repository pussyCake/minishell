
#include "minishell.h"

extern t_state	g_state;

void	sigint_handler(int sig)
{
	if (sig != SIGINT)
		return ;
	if (g_state.process_running)
	{
		errno = 130;
		ft_putstr_fd("^C\n", g_state.fd_stdout);
	}
	else
	{
		ft_putstr("\b \n");
		ft_putstr("\033[35mminishell$ \033[0m");
	}
}

void	sigquit_handler(int sig)
{
	if (sig != SIGQUIT)
		return ;
	if (g_state.process_running)
	{
		ft_putstr_fd("^\\Quit: 3\n", g_state.fd_stdout);
		errno = 131;
	}
}
