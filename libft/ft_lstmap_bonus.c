/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/20 17:43:26 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/25 22:57:12 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *edward;
	t_list *new;

	edward = 0;
	if (!f)
		return (0);
	if (lst)
	{
		edward = ft_lstnew(f(lst->content));
		if (edward == 0)
			return (0);
		while (lst->next)
		{
			lst = lst->next;
			new = ft_lstnew(f(lst->content));
			if (new == 0)
				ft_lstclear(&edward, del);
			ft_lstadd_back(&edward, new);
		}
	}
	return (edward);
}
