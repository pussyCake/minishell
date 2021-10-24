
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*prev;

	list = *lst;
	while (list)
	{
		prev = list;
		list = list->next;
		if (del)
			(*del)(prev->content);
		free(prev);
	}
	*lst = NULL;
}
