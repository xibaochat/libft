#include "libft.h"

size_t		get_lens(char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char		*strdup(const char *s)
{
	size_t	lens;
	size_t	i;
	char 	*str;
	char *s1;

	i = 0;
	s1 = (char *)s;
	str = (char *)malloc(lens + 1);
	while (i < lens)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
