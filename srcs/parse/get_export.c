
#include "minishell.h"

void	ft_get_export(t_parse *parse, char **str)
{
	char	*tmp;

	tmp = *str + 6;
	while (ft_isspace(*tmp))
		tmp++;
	parse->command_id = CMD_EXPORT;
	ft_read_line(&tmp, parse);
	*str = tmp;
}
