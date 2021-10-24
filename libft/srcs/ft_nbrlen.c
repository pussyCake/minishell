
#include "libft.h"

size_t	ft_nbrlen(int nbr)
{
	size_t	l;

	l = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		if (nbr == -2147483648)
			return (11);
		nbr = -nbr;
		l++;
	}
	while (nbr > 0)
	{
		l++;
		nbr = nbr / 10;
	}
	return (l);
}
