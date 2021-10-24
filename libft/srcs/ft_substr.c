
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (l < start)
		return (ft_strdup(""));
	if (l < start + len)
	{
		str = (char *)malloc(sizeof(char) * (l - start + 1));
		if (str)
			ft_strlcpy(str, s + start, l - start + 1);
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str)
		ft_strlcpy(str, s + start, len + 1);
	return (str);
}
