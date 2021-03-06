
#include "minishell.h"

void	ft_fshell(char **tmp, char **buff)
{
	char	*tmp1;

	if (*tmp)
	{
		if (!*buff)
			*buff = ft_strdup("");
		tmp1 = *buff;
		*buff = ft_strjoin(*buff, *tmp);
		free(*tmp);
		if (tmp1)
			free(tmp1);
	}
}

int 	ft_strchar_int_q(const char *str, char *line)
{
	int	i;
	int	j;

	i = 0;
	line++;
	while (line[i])
	{
		j = 0;
		while (str[j])
		{
			if (str[j] == line[i])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

char	*ft_for_print_q(char **str, char *ch)
{
	char	*tmp;
	int		i;

	i = ft_strchar_int_q(ch, *str) + 2;
	tmp = (char *) malloc(sizeof(char) * (i));
	ft_strlcpy(tmp, *str, i);
	(*str) += i - 1;
	return (tmp);
}
