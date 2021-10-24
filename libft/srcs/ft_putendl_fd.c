
#include "libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	int	l;

	l = 0;
	l += write(fd, s, ft_strlen(s));
	l += write(fd, "\n", 1);
	return (l);
}
