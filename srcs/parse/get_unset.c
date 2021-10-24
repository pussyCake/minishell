
#include "minishell.h"

void	ft_get_unset(t_parse *parse, char **str)
{
	char	*tmp;

	tmp = *str + 5;
	while (ft_isspace(*tmp))
		tmp++;
	parse->command_id = CMD_UNSET;
	ft_read_line(&tmp, parse);
	*str = tmp;
}
