
#include "minishell.h"

void	cmd_echo(t_parse *parse)
{
	int		need_new_line;
	t_list	*list;

	errno = 0;
	list = parse->argv;
	if (list == 0)
	{
		ft_putchar_fd('\n', 1);
		return ;
	}
	need_new_line = 1;
	if (ft_strncmp(list->content, "-n", 3) == 0)
	{
		need_new_line = 0;
		list = list->next;
	}
	while (list)
	{
		ft_putstr_fd(list->content, 1);
		if (list->next)
			ft_putchar_fd(' ', 1);
		list = list->next;
	}
	if (need_new_line)
		ft_putchar_fd('\n', 1);
}
