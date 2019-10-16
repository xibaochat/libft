#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = (char *)s;
	if (!s || !f)
		return (str);
	i = 0;
	while (i < ft_strlen(str))
	{
		(*f)(i, str[i]);
		i++;
	}
	return (str);
}
