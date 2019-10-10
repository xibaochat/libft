#include <string.h>

size_t		get_lens(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{

	size_t	dest_lens;
	size_t	src_lens;
	size_t	meme;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	dest_lens = get_lens(dest);
	src_lens = get_lens((char *)src);
	meme = size;
	while (dest[i] && size)
	{
		i++;
		size--;
	}
	if (!size)
		return (meme + src_lens);
	while (src[j] && size > 1)
	{
		dest[i++] = src[j++];
		size--;
	}
	dest[i] = '\0';
	return (dest_lens + src_lens);
}
