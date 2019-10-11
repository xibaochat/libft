#include <stdlib.h>

int			get_new_str_lens(char *s1, char *sep)
{
	int		i;
	int		j;
	int		lens;

	i = 0;
	lens = 0;
	while (s1[i])
	{
		j = 0;
		while (sep[j] && s1[i] != sep[j])
			j++;
		if (!sep[j])
			lens++;
		i++;
	}
	return (lens);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*sep;
	char	*new_str;
	int		lens;
	int		i;
	int		j;
	int		k;

	str = (char *)s1;
	sep = (char *)set;
	if (!str || !sep)
		return (NULL);
	lens = get_new_str_lens(str, sep);
	new_str = (char *)malloc(lens + 1);
	new_str[lens] = '\0';
	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		while (sep[j] && str[i] != sep[j])
			j++;
		if (!sep[j])
			new_str[k++] = str[i];
		i++;
	}
	return (new_str);
}
