/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <xinwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 04:43:28 by xinwang           #+#    #+#             */
/*   Updated: 2019/10/18 04:51:08 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty_string(void)
{
	char	*p;

	p = (char *)malloc(sizeof(char));
	if (!p)
		return (NULL);
	p[0] = '\0';
	return (p);
}

static int	char_in_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	get_starting_index(char *str, char *set)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!char_in_set(str[i], set))
			return (i);
		i++;
	}
	return (i);
}

static int	get_end_start(char *str, char *set)
{
	int		lens;

	lens = ft_strlen(str);
	while (str[--lens])
		if (!char_in_set(str[lens], set))
			return (lens);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*ptr;

	start = get_starting_index((char *)s1, (char *)set);
	end = get_end_start((char *)s1, (char *)set);
	if (!(ptr = (char *)malloc(sizeof(char) * (end - start + 2))))
		return (empty_string());
	i = 0;
	while (start <= end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
