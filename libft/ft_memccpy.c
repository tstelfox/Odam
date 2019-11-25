/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 16:44:26 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/25 23:43:26 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*adst;
	char		*asrc;
	size_t		i;

	adst = (char *)dst;
	asrc = (char *)src;
	i = 0;
	while (i < n)
	{
		adst[i] = asrc[i];
		if (asrc[i] == (char)c)
			return (&adst[i + 1]);
		i++;
	}
	return (0);
}
