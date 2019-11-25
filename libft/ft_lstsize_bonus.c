/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 22:01:41 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/18 22:31:50 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int count;

	count = 0;
	if (lst == 0)
		return (0);
	while (lst != 0)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
