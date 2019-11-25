/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 18:25:08 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/12 21:51:11 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cal;
	size_t	i;

	i = 0;
	cal = (void	*)malloc(count * size);
	if (cal == 0)
		return (0);
	ft_bzero(cal, (size * count));
	return (cal);
}
