
#include "minishell.h"

void	cmd_exit(t_parse *parse)
{
	unsigned char	code;

	code = 0;
	if (parse->argv)
	{
		code = (unsigned char)ft_atoi(parse->argv->content);
		if (((char *)parse->argv->content)[0] != '-' &&
			!ft_isdigit(((char *)parse->argv->content)[0]))
		{
			ft_putendl_fd("exit", 2);
			ft_putstr_fd("minishell: exit: ", 2);
			ft_putstr_fd(parse->argv->content, 2);
			ft_putendl_fd(": numeric argument required", 2);
			exit(255);
		}
		if (parse->argv->next)
		{
			errno = 1;
			ft_putendl_fd("exit", 2);
			ft_putendl_fd("minishell: exit: too many arguments", 2);
			return ;
		}
	}
	ft_putendl_fd("exit", 2);
	exit(code);
}
