/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <xinwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:27:03 by xinwang           #+#    #+#             */
/*   Updated: 2019/10/17 18:27:04 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ger_nb_words(char *str, char c)
{
	int		i;
	int		nb_words;

	i = 0;
	nb_words = 0;
	while (str[i])
	{
		if ((!i && (str[i] != c)) ||
			(i > 0 && (str[i - 1] == c) && (str[i] != c)))
			nb_words++;
		i++;
	}
	return (c);
}

int			get_lens(char *str, int i, char c)
{
	int		lens;

	lens = 0;
	while (str[i] && (str[i] != c))
	{
		i++;
		lens++;
	}
	return (lens);
}

char		**get_tab(char **arr, char *str, char c)
{
	int		i;
	int		j;
	int		k;
	int		lens;

	i = 0;
	j = 0;
	while (str[i])
	{
		k = 0;
		while (str[i] && (str[i] == c))
			i++;
		if (str[i] && (str[i] != c))
		{
			lens = get_lens(str, i, c);
			arr[j] = (char *)malloc(lens + 1);
			while (str[i] && (str[i] != c))
				arr[j][k++] = str[i++];
			arr[j][k] = '\0';
			arr[++j] = NULL;
		}
	}
	return (arr);
}

char		**empty_arr(void)
{
	char	**res;

	res = (char **)malloc(2 * sizeof(char *));
	res[0] = "";
	res[1] = NULL;
	return (res);
}

char		**ft_split(char const *s, char c)
{
	char	*str;
	int		words_nb;
	char	**arr;

	str = (char *)s;
	arr = NULL;
	if (!str)
		return (NULL);
	words_nb = ger_nb_words(str, c);
	if (!words_nb)
		return (empty_arr());
	arr = (char **)malloc(sizeof(char *) * (words_nb + 1));
	if (!arr)
		return (NULL);
	arr[words_nb] = NULL;
	arr = get_tab(arr, str, c);
	return (arr);
}
