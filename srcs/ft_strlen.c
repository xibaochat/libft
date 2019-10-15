int ft_strlen(char *str)
{
	int i;
	int lens;

	i = -1;
	while (str[++i])
		lens++;
	return (lens);
}
