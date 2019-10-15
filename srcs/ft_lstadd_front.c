#include "libft.h"

void ft_lstadd_front(t_list **list, t_list *new)
{
	if (!list)
		return ;
	if (new)
	{

		new->next = *list;
		*list = new;
	}
}
