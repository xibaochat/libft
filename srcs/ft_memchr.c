#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const char *str;
	unsigned int i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == c)
			return (void *)(str + i);
		i++;
	}
	return (NULL);
}
