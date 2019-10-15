int is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int get_start_index(char *str)
{
	int i;

	i = 0;
	while (str[i] && is_space(str[i]))
		i++;
	return (i);
}

int ft_atoi(char *str)
{
	int sign;
	int res;
	int i;

	sign = 1;
	res = 0;
	i = get_start_index(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res *10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
