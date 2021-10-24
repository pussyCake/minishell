
#include "minishell.h"

void	cmd_pwd(void)
{
	char	pwd[1024];

	errno = 0;
	ft_putendl_fd(getcwd(pwd, 1024), 1);
}
