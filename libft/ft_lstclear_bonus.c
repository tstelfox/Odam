/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/19 15:54:59 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/25 22:36:45 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *descend;

	descend = *lst;
	if (lst && del)
	{
		while (descend)
		{
			del(descend->content);
			free(descend);
			descend = descend->next;
		}
	}
	*lst = 0;
}
