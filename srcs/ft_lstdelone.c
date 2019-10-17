#include "libft.h"

void		ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	lst->next = NULL;
	free(lst);
	lst = NULL;
}
