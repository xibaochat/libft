#include "libft.h"

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	i = 0;
	ptr = (char *)s1;
	ptr2 = (char *)s2;
	if (!n)
		return (0);
	while (ptr[i] && ptr2[i] && i < n && (ptr[i] == ptr2[i]))
		i++;
	return (ptr[i] - ptr2[i]);
}
