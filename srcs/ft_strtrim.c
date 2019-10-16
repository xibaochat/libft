#include "libft.h"

int char_in_set(char c, char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}


int get_starting_index(char *str, char *set)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!char_in_set(str[i], set))
			return (i);
		i++;
	}
	return (i);
}

int		get_end_start(char *str, char *set)
{
	int lens;
	int i;

	i = 0;
	lens = ft_strlen(str);
	while (str[--lens])
	{
		if (!char_in_set(str[lens], set))
			return (lens);
	}
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	int i;
	char *ptr;


	start = get_starting_index((char *)s1, (char *)set);
	end = get_end_start((char *)s1, (char *)set);
	if (!(ptr = (char *)malloc(sizeof(char) * (end - start + 2))))
		return (NULL);
	i = 0;
	while (start <= end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}

#include <stdio.h>
int main()
{
	char    *s1 = "Hello \t  Please\n Trim me !";
	char    *s2 = "Hello \t  Please\n Trim me !";
	char *ptr = ft_strtrim(s1, s2);

	printf("%s",ptr);
	return 0;
}
