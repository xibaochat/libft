#include "libft.h"
#include <stdio.h>

/*void	*ft_memccpy(void *dst, const void *src, int c, size_t size)
{
	unsigned char*s1;
	unsigned char*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (size > 0)
	{
		*s1 = *s2;
		if ((unsigned char)c == *s2)
			return ((void *)(++s1));
		size--;
		s1++;
		s2++;
	}
	return (NULL);
	}*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		if ((unsigned char)c == s[i])
			return ((void *)(d + i + 1));
		i++;
	}
	return (NULL);
}

/*int main()
{
	char    buff1[] = "abcdefghijklmnopqrstuvwxyz";
	char    buff2[] = "abcdefghijklmnopqrstuvwxyz";
	char    *src = "string with\200inside !";

	memccpy(buff1, src, '\200', 21);
	ft_memccpy(buff2, src, '\200', 21);
	printf("%s\n%s", buff1, buff2);
	return 0;
	}*/
