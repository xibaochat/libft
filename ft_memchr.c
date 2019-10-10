#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const char *str;
	unsigned int i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == c)
			return (void *)(str + i);
		i++;
	}
	return (NULL);
}

int main()
{
	char str[] = "http://www.runoob.com";
	char c = '.';
	char *ret;

	ret = (char *)ft_memchr(str, c, strlen(str));
	printf("|%c| 之后的字符串是 - |%s|\n", c, ret);
	return 0;
}
