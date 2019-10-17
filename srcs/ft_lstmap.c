/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <xinwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:04:03 by xinwang           #+#    #+#             */
/*   Updated: 2019/10/17 18:04:09 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *))
{
	int size;
	int i;
	t_list *ptr;

	size = ft_lstsize(lst);
	i = 0;
	ptr = (t_list *)malloc(sizeof(t_list) * size);
	if (!ptr)
		return (NULL);
	while (lst)
	{
		ptr[i].content = (*f)(lst->content);
		ptr[i].next = lst->next;
		lst = lst->next;
		i++;
	}
	return (ptr);
}
