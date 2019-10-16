#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	lens;

	lens = ft_strlen(s);
	write(fd, s, lens);
	write(fd, "\n", 1);
}
