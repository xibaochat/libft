#include "libft.h"

char				*ft_substr(char const	*s, unsigned int	start,size_t	len)
{
	char			*str;
	char			*sub_str;
	unsigned int	i;


	i = 0;
	str = (char *)s;
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (!s || !sub_str)
		return (NULL);
	while (i < len && str[start])
		sub_str[i++] = str[start++];
	sub_str[i] = '\0';
	return (sub_str);
}
