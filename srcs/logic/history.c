
#include "minishell.h"

static void	history_realloc(t_history *history)
{
	int		i;
	char	**arr;

	history->size = (int)(history->size * 1.5);
	arr = (char **)ft_calloc(history->size, sizeof(char *));
	i = 0;
	while (i < history->current)
	{
		arr[i] = history->content[i];
		i++;
	}
	free(history->content);
	history->content = arr;
}

void	history_add(t_history *history, char *command_line)
{
	if (history->current >= history->size)
		history_realloc(history);
	history->content[history->current] = ft_strdup(command_line);
	history->current++;
}
