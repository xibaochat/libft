#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *head;

	if (!lst)
		return ;
	if (*lst)
	{
		head = *lst;
		while ((*lst)->next)
			*lst = (*lst)->next;
		(*lst)->next = new;
		*lst = head;
	}
	else
		*lst = new;
}
