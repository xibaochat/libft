#include <unistd.h>

int		get_lens(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	int	lens;

	lens = get_lens(s);
	write(fd, s, lens);
	write(fd, "\n", 1);
}
