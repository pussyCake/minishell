
#include "minishell.h"

void	cmd_cd(t_parse *parse, char ***env)
{
	char	*buf;

	errno = 0;
	if (parse->argv == 0)
		return ;
	chdir(parse->argv->content);
	if (errno)
	{
		ft_putstr_fd("minishell: cd: ", 2);
		ft_putstr_fd(parse->argv->content, 2);
		ft_putstr_fd(": ", 2);
		ft_putendl_fd(strerror(errno), 2);
		errno = 1;
	}
	else
	{
		buf = (char *)malloc(sizeof(char) * 1024);
		insert_env("PWD", ft_strjoin("PWD=", getcwd(buf, 1024)), env);
		free(buf);
	}
}
