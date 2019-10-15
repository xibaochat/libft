#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list *ptr;

	if (!lst || !del)
		return ;
	ptr = lst;
	(*del)(lst->content);
	lst->next = NULL;
	free(lst);
}
