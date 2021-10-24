
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_p;

	if (!s)
		return ;
	s_p = (unsigned char *)s;
	while (n > 0)
	{
		*s_p = 0;
		s_p++;
		n--;
	}
}
