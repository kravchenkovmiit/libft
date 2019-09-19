#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin_lst;
	t_list	*tmp;

	begin_lst = f(lst);
	if (lst == NULL || begin_lst == NULL)
		return (NULL);
	tmp = begin_list;
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = f(lst);
		if (tmp->next == NULL)
		{
			free(tmp->next);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (begin_lst);
}
