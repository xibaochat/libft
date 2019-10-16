#include "libft.h"

int ft_isalnum(int c)
{
//return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
	return (ft_isalpha(c) || ft_isdigit(c));
}
