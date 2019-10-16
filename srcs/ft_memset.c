#include "libft.h"

void				*memset(void *s, int c, size_t n)
{
	char			*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return s;
}
