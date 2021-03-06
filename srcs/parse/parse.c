
#include "minishell.h"

void	ft_skip_brk(char **line)
{
	if (**line == ';')
		(*line)++;
}

void	ft_skip_space(char **buff)
{
	while (ft_isspace(**buff))
		(*buff)++;
}

int 	ft_loop_for_parse(char *line, char ***env)
{
	char	*line_start;
	char	*buff;
	char	*tmp;
	t_parse	parse;

	line = ft_strdup(line);
	ft_bzero(&parse, sizeof(parse));
	while (*line)
	{
		line_start = line;
		ft_skip_brk(&line);
		ft_init_parse(&parse, *env);
		buff = ft_convers_dol(&parse, &line);
		tmp = buff;
		if (!buff)
			return (-1);
		ft_skip_space(&buff);
		ft_get_arg(&buff, &parse);
		execute_command_line(&parse, env);
		line = ft_strjoin(buff, line);
		free(line_start);
		free(tmp);
	}
	free(line);
	return (1);
}

void	parse_line(char *line, char ***env)
{
	while (ft_isspace(*line))
		line++;
	if (ft_walk_str(line) == -1)
	{
		ft_putendl_fd("syntax error near unexpected token `;'", 2);
		return ;
	}
	ft_loop_for_parse(line, env);
}
