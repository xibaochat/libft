/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:51:39 by xinwang           #+#    #+#             */
/*   Updated: 2019/10/18 11:51:41 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*tmp;
	int		size;
	int		i;

	if (!lst || !f)
		return (NULL);
	size = ft_lstsize(lst);
	i = 0;
	ptr = (t_list *)malloc(sizeof(t_list) * size);
	if (!ptr)
		return (NULL);
	while (lst)
	{
		ptr[i].content = (*f)(lst->content);
		ptr[i].next = lst->next;
		(*del)(lst->content);
		tmp = lst->next;
		free(lst);
		lst = tmp;
		i++;
	}
	return (ptr);
}
