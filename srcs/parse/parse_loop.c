
#include "minishell.h"

int	ft_check_red(char **str, t_parse *parse, int err)
{
	if (err == 0)
	{
		(*str)++;
		if (**str == '>')
		{
			(*str)++;
			parse->pipe_info.append_output = 1;
		}
		return (ft_get_outfile(str, parse));
	}
	else
	{
		(*str) += 2;
		if (**str == '>')
		{
			(*str)++;
			parse->pipe_info.append_err_output = 1;
		}
		return (ft_get_errfile(str, parse));
	}
}

int	ft_check_sym(char **str, t_parse *parse, int chk)
{
	if (**str == '|' && (parse->q % 2 == 0 || parse->wq % 2 == 0))
	{
		parse->pipe_info.pipe_to_next = 1;
		(*str)++;
		return (-1);
	}
	else if (**str == '>' && (parse->q % 2 == 0 || parse->wq % 2 == 0)
		&& ft_check_red(str, parse, 0) == -1)
		return (-1);
	else if (**str == '2' && (*(*str + 1)) == '>' && (parse->q % 2 == 0
			|| parse->wq % 2 == 0) && ft_check_red(str, parse, 1) == -1)
		return (-1);
	else if (**str == '<' && (parse->q % 2 == 0 || parse->wq % 2 == 0)
		&& ft_get_infile(str, parse) == -1)
		return (-1);
	else
		ft_push_text(str, parse, chk);
	return (0);
}

void	ft_read_line(char **str, t_parse *parse)
{
	int	check;

	while (**str)
	{
		check = 1;
		while (ft_isspace(**str))
		{
			(*str)++;
			check = 0;
		}
		if (!**str)
			return ;
		if (**str == ';' && (parse->q % 2 == 0 || parse->wq % 2 == 0))
		{
			(*str)++;
			return ;
		}
		if (ft_check_sym(str, parse, check) == -1)
			return ;
	}
}

void	ft_get_arg(char **buff, t_parse *parse)
{
	if (ft_check_arg("echo", *buff, 4) == 1)
		ft_get_echo(parse, buff);
	else if (ft_check_arg("cd", *buff, 2) == 1)
		ft_get_cd(parse, buff);
	else if (ft_check_arg("pwd", *buff, 3) == 1)
		ft_get_pwd_env(parse, CMD_PWD, buff);
	else if (ft_check_arg("export", *buff, 6) == 1)
		ft_get_export(parse, buff);
	else if (ft_check_arg("unset", *buff, 5) == 1)
		ft_get_unset(parse, buff);
	else if (ft_check_arg("env", *buff, 3) == 1)
		ft_get_pwd_env(parse, CMD_ENV, buff);
	else if (ft_check_arg("exit", *buff, 4) == 1)
		ft_get_exit(parse, buff);
	else if (*buff)
		ft_get_other(parse, buff);
}
