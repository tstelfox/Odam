/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 20:15:48 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/18 20:58:38 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *head;

	head = malloc(sizeof(t_list));
	if (head == 0)
		return (0);
	head->content = content;
	head->next = 0;
	return (head);
}
