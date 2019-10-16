#include "libft.h"

char		*ft_strdup(const char *s)
{
	size_t	lens;
	size_t	i;
	char 	*str;
	char *s1;

	i = 0;
	s1 = (char *)s;
	lens = ft_strlen(s1);
	str = (char *)malloc(lens + 1);
	if (!str)
		return (NULL);
	while (i < lens)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
