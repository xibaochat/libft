/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <xinwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:07:52 by xinwang           #+#    #+#             */
/*   Updated: 2019/10/17 18:07:55 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *head;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		(*del)((*lst)->content);
		head = (*lst)->next;
		(*lst)->next = NULL;
		free(*lst);
		*lst = head;
	}
}
