#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;
	unsigned int i;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
