
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;

	if (!(dst && src))
		return (dst);
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	if (src_p > dst_p)
	{
		while (len-- > 0)
		{
			*dst_p = *src_p;
			dst_p++;
			src_p++;
		}
	}
	else if (src_p < dst_p)
	{
		while (len-- > 0)
			*(dst_p + len) = *(src_p + len);
	}
	return (dst);
}
