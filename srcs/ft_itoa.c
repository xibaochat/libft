/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <xinwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:06:35 by xinwang           #+#    #+#             */
/*   Updated: 2019/10/17 18:06:39 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_size(int n)
{
	int				size;

	size = 1;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n > 10)
	{
		size++;
		n = n / 10;
	}
	return (size);
}


char	*get_converted_str(char *str, unsigned int res, int *i)
{
	if (res >= 10)
		get_converted_str(str, res / 10, i);
	str[(*i)++] = res % 10 + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	res;
	char			*str;

	i = 0;
	res = n;
	if (!(str = (char *)malloc(get_size(n) + 1)))
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		res = -1 * n;
	}
	str = get_converted_str(str, res, &i);
	str[i] = '\0';
	return (str);
}
