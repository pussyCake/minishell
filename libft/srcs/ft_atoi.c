
int	ft_atoi(const char *str)
{
	int				sign;
	unsigned int	number;

	sign = 1;
	number = 0;
	if (!str)
		return (0);
	while (*str == '\t' || *str == '\n' || *str == ' '
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+')
		sign = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		number = number * 10 + *str - '0';
		str++;
	}
	return (number * sign);
}
