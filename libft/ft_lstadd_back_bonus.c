/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 22:33:01 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/20 19:03:36 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *descend;

	descend = *alst;
	if (*alst == 0)
	{
		*alst = new;
		return ;
	}
	while (descend->next != 0)
	{
		descend = descend->next;
	}
	descend->next = new;
}
