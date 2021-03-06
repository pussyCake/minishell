
#include "minishell.h"

char	*ft_escape(char **str)
{
	char	tmp[2];

	(*str)++;
	tmp[0] = **str;
	(*str)++;
	tmp[1] = '\0';
	return (ft_strdup(tmp));
}

char	*ft_preescape(char **str)
{
	char	tmp[3];

	tmp[0] = **str;
	(*str)++;
	tmp[1] = **str;
	(*str)++;
	tmp[2] = '\0';
	return (ft_strdup(tmp));
}

char	*ft_preescape_quote(char **str)
{
	char	tmp[4];

	tmp[0] = **str;
	tmp[1] = **str;
	(*str)++;
	tmp[2] = **str;
	(*str)++;
	tmp[3] = '\0';
	return (ft_strdup(tmp));
}

int	ft_parse_for_escape_quote(char **str, char **line)
{
	char	*tmp;
	char	*tmp1;

	tmp = ft_preescape_quote(str);
	if (tmp == 0)
		return (-1);
	if (!*line)
		*line = ft_strdup("");
	tmp1 = *line;
	*line = ft_strjoin(*line, tmp);
	free(tmp);
	if (tmp1)
		free(tmp1);
	return (1);
}

int	ft_parse_for_escape(char **str, char **line)
{
	char	*tmp;
	char	*tmp1;

	tmp = ft_preescape(str);
	if (tmp == 0)
		return (-1);
	if (!*line)
		*line = ft_strdup("");
	tmp1 = *line;
	*line = ft_strjoin(*line, tmp);
	free(tmp);
	if (tmp1)
		free(tmp1);
	return (1);
}
