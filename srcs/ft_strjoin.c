#include "libft.h"

int			get_lens(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*manage_empty_str(char *s1, char *s2)
{
	char *s;

	s = (char *)malloc(sizeof(char));
	s[0] = '\0';
	if (s1 && !s2)
		return (s1);
	if (!s1 && s2)
		return (s2);
	return (s);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int 	total_lens;
	int		i;
	int		j;
	char	*str1;
	char	*str2;
	char	*str;

	i = -1;
	j = -1;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!str1 || !str2)
		return(manage_empty_str(str1, str2));
	total_lens = get_lens(str1) + get_lens(str2);
	str = (char *)malloc((total_lens + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[total_lens] = '\0';
	while (str1[++i])
		str[i] = str1[i];
	while (str2[++j])
		str[i++] = str2[j];
	return (str);
}
