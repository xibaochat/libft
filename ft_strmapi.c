#include <stdlib.h>

unsigned int 		get_lens(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = (char *)s;
	if (!s || !f)
		return (str);
	i = 0;
	while (i < get_lens(str))
	{
		(*f)(i, str[i]);
		i++;
	}
	return (str);
}
