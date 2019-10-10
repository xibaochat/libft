#include <stdlib.h>

char		*strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == c)
		return (str + i);
	return (NULL);
}
