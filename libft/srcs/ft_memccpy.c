
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;

	if (!(dst && src))
		return (NULL);
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	while (n > 0)
	{
		*dst_p = *src_p;
		if (*src_p == (unsigned char)c)
			return (dst_p + 1);
		dst_p++;
		src_p++;
		n--;
	}
	return (NULL);
}
