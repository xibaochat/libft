#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *s;
	char *d;
	char tmp[n];
	unsigned int i;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	while (i < n)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = tmp[i];
		i++;
	}
	dest = d;
	return (dest);
}


int main ()
{
	char str[] = "abcdefghij";
	char s[] = "abcdefghij";
	memcpy(str+ 3, str+1 ,4);
	ft_memmove(s+ 3,s+1, 4);
	printf("%s\n%s", str, s);
	return 0;
}
