/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <xinwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:27:38 by xinwang           #+#    #+#             */
/*   Updated: 2019/10/17 18:27:40 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*manage_empty_str(char *s1, char *s2)
{
	char *s;

	s = (char *)malloc(sizeof(char));
	s[0] = '\0';
	if (s1 && !s2)
		return (s1);
	if (!s1 && s2)
		return (s2);
	return (s);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int 	total_lens;
	int		i;
	int		j;
	char	*str1;
	char	*str2;
	char	*str;

	i = -1;
	j = -1;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!str1 || !str2)
		return (manage_empty_str(str1, str2));
	total_lens = ft_strlen(str1) + ft_strlen(str2);
	str = (char *)malloc((total_lens + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[total_lens] = '\0';
	while (str1[++i])
		str[i] = str1[i];
	while (str2[++j])
		str[i++] = str2[j];
	return (str);
}
