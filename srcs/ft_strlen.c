int ft_strlen(char *str)
{
	int i;
	int lens;

	i = -1;
	lens = 0;
	while (str[++i])
		lens++;
	return (lens);
}
