#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	char *s;
	int i;
	int j;
	int mark;

	i = 0;
	j = 0;
	mark = 0;
	s = (char *)str;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			j = i;
			mark =1;
		}
		i++;
	}
	if (mark)
		return (s + j);
	if (!c)
		return (s + i);
	return (NULL);
}
