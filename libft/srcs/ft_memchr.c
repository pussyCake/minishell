
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_p;

	if (!s)
		return (NULL);
	s_p = (unsigned char *)s;
	while (n > 0)
	{
		if (*s_p == (unsigned char)c)
			return (s_p);
		s_p++;
		n--;
	}
	return (NULL);
}
