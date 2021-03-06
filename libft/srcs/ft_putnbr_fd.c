
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n > -2147483648 && n <= 2147483647)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
			ft_putchar_fd((char)(n + '0'), fd);
	}
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
}
