int	ft_atoi(const char *str)
{
	int	nb;
	int	sign;

	sign = 1;
	while (9 <= *str && *str <= 13)
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (sign * nb);
}
