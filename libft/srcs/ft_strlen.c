
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
