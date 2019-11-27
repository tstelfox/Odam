/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 20:09:30 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/26 20:57:18 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (!src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[c] != '\0')
		c++;
	while ((((dstsize - 1) > i) && (i < c)) && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (i >= 0 && dstsize != 0)
		dst[i] = '\0';
	return (c);
}
