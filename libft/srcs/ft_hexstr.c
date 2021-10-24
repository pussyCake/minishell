
#include "libft.h"

static size_t	get_hex_length(unsigned long p)
{
	size_t	l;

	l = 0;
	while (p > 0)
	{
		l++;
		p = p / 16;
	}
	return (l);
}

char	*ft_hexstr(unsigned long p)
{
	char	*str;
	char	*hex_tab;
	size_t	i;

	if (p == 0)
		return (ft_strdup("0"));
	hex_tab = ft_strdup("0123456789abcdef");
	if (!hex_tab)
		return (0);
	i = get_hex_length(p);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
	{
		free(hex_tab);
		return (0);
	}
	str[i] = '\0';
	while (p > 0)
	{
		i--;
		str[i] = hex_tab[p % 16];
		p = p / 16;
	}
	free(hex_tab);
	return (str);
}
