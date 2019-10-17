/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <xinwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:23:23 by xinwang           #+#    #+#             */
/*   Updated: 2019/10/17 18:23:27 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
