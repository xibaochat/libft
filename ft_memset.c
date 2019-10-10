#include <string.h>
#include <stdio.h>

void				*memset(void *s, int c, size_t n)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return s;
}
