#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char				*ft_substr(char const	*s, unsigned int	start,size_t	len)
{
	char			*str;
	char			*sub_str;
	unsigned int	i;
	unsigned int	j;


	i = 0;
	j = start - 1;
	str = (char *)s;
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	while (i < len && str[j])
		sub_str[i++] = str[j++];
	sub_str[i] = '\0';
	return (sub_str);
}

int main()
{
	printf("%s", ft_substr("c programming", 3, 11));
	return 0;
}
