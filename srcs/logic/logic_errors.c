
#include "minishell.h"

void	throw_error(char *argv, char *description, int err)
{
	ft_putstr_fd("minishell: ", 2);
	ft_putstr_fd(argv, 2);
	ft_putendl_fd(description, 2);
	errno = err;
}
