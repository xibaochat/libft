#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int nb;

	if (n < 0)
	{
		ft_putstr_fd("-", fd);
		nb = -n;
	}
	else
		nb = n;
	if (nb == 2147483648)
		ft_putstr_fd("2147483648", fd);
	else if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
	else
		ft_putchar_fd(nb % 10 + '0', fd);
}
