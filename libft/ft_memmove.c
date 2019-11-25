/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 18:33:28 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/12 21:23:28 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*adst;
	char		*asrc;
	size_t		i;

	adst = (char *)dst;
	asrc = (char *)src;
	i = 0;
	if (!src && !dst)
		return (0);
	if (src >= dst)
	{
		while (i < len)
		{
			adst[i] = asrc[i];
			i++;
		}
		len = 0;
	}
	while (len > 0)
	{
		len--;
		adst[len] = asrc[len];
	}
	return (dst);
}
