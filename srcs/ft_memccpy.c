/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <xinwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:23:13 by xinwang           #+#    #+#             */
/*   Updated: 2019/10/17 18:23:15 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

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
