/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 22:09:47 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/25 23:44:57 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*adst;
	char		*asrc;
	size_t		i;

	adst = (char *)dst;
	asrc = (char *)src;
	i = 0;
	if (!src && !dst)
		return (0);
	while (i < n)
	{
		adst[i] = asrc[i];
		i++;
	}
	return (dst);
}
