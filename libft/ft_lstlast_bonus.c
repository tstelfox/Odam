/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 22:14:42 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/18 22:30:29 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*descend;

	if (lst == 0)
		return (0);
	descend = lst;
	while (descend->next != 0)
	{
		descend = descend->next;
	}
	return (descend);
}
