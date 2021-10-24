
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l;

	l = 0;
	while (*dst != '\0' && dstsize > 0)
	{
		dst++;
		dstsize--;
		l++;
	}
	while (*src != '\0' && dstsize > 1)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
		l++;
	}
	if (dstsize != 0)
		*dst = '\0';
	while (*src != '\0')
	{
		src++;
		l++;
	}
	return (l);
}
