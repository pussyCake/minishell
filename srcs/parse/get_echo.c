
#include "minishell.h"

void 	ft_get_echo(t_parse *parse, char **str)
{
	char	*tmp;

	tmp = *str + 4;
	while (ft_isspace(*tmp))
		tmp++;
	parse->command_id = CMD_ECHO;
	ft_read_line(&tmp, parse);
	*str = tmp;
}
