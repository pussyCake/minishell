
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	if (!s)
		return (NULL);
	tmp = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			tmp = (char *)s;
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (tmp);
}
