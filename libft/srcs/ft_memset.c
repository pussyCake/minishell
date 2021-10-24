
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_p;

	if (!b)
		return (b);
	b_p = (unsigned char *)b;
	while (len > 0)
	{
		*b_p = (unsigned char)c;
		b_p++;
		len--;
	}
	return (b);
}
