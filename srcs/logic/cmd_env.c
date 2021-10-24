
#include "minishell.h"

void	cmd_env(char **env)
{
	errno = 0;
	while (*env)
	{
		if (ft_strchr(*env, '='))
			ft_putendl_fd(*env, 1);
		env++;
	}
}
