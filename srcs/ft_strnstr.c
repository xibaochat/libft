/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <xinwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:29:06 by xinwang           #+#    #+#             */
/*   Updated: 2019/10/17 18:29:07 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
		size_t	i;
		size_t	j;
		size_t	tmp;
		char	*big;
		char	*little;

		i = 0;
		big = (char *)str;
		little = (char *)to_find;
		if (little[i] == '\0')
			return (big);
		while (big[i] && i < len)
		{
			tmp = i;
			j = 0;
			while (big[tmp] && little[j] && (big[tmp] == little[j]) && tmp < len)
			{
				tmp++;
				j++;
				if (!little[j])
					return (big + i);
			}
			i++;
		}
		return (NULL);
}
