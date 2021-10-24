
#include "minishell.h"

void	ft_get_pwd_env(t_parse *parse, int id, char **str)
{
	char	*tmp;

	tmp = *str + 3;
	if (id == CMD_PWD)
		parse->command_id = CMD_PWD;
	else
		parse->command_id = CMD_ENV;
	ft_read_line(&tmp, parse);
	*str = tmp;
}
