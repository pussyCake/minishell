
#include "minishell.h"

void	ft_get_cd(t_parse *parse, char **str)
{
	char	*tmp;

	tmp = *str + 2;
	while (ft_isspace(*tmp))
		tmp++;
	parse->command_id = CMD_CD;
	ft_read_line(&tmp, parse);
	*str = tmp;
}
