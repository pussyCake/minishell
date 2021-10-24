
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*p;
	size_t			total_size;
	unsigned char	*tmp;

	total_size = count * size;
	p = malloc(total_size);
	if (p)
	{
		tmp = (unsigned char *)p;
		while (total_size > 0)
		{
			*tmp = 0;
			tmp++;
			total_size--;
		}
	}
	return (p);
}
