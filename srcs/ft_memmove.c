#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *s;
	char *d;
	char tmp[n];
	unsigned int i;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	while (i < n)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = tmp[i];
		i++;
	}
	dest = d;
	return (dest);
}
