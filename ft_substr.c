#include <string.h>
#include <stdlib.h>

char				*ft_substr(char const	*s, unsigned int	start,size_t	len)
{
	char			*str;
	char			*sub_str;
	unsigned int	i;

	i = 0;
	str = (char *)s;
	sub_str = (char *)malloc(len * sizeof(char));
	while (i < len)
	{
		sub_str[i] = str[start];
		i++;
	}
	return (sub_str);
}
