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
