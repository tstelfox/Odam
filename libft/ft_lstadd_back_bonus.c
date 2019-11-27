/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 22:33:01 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/26 20:28:35 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *descend;

	descend = *lst;
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	while (descend->next != 0)
	{
		descend = descend->next;
	}
	descend->next = new;
}
