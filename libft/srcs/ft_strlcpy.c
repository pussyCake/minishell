
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!src)
		return (0);
	i = 0;
	if (dst && dstsize)
	{
		while (*src != '\0' && dstsize > 1)
		{
			*dst = *src;
			src++;
			dst++;
			dstsize--;
			i++;
		}
		*dst = '\0';
	}
	while (*src != '\0')
	{
		i++;
		src++;
	}
	return (i);
}
