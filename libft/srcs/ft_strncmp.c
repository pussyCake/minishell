
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!(s1 && s2))
		return (0);
	while (n > 0 && (unsigned char)*s1 == (unsigned char)*s2 && *s1 != '\0')
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
