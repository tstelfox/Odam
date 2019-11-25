/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/09 21:06:56 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/25 23:20:55 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t dstsize)
{
	size_t c;

	c = 0;
	while (s[c] && c < dstsize)
		c++;
	return (c);
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t it;
	size_t dstlen;
	size_t srclen;

	i = 0;
	it = 0;
	dstlen = ft_strnlen(dst, dstsize);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	while ((dst[i] != '\0') && (i < dstsize))
		i++;
	while (((dstsize - 1) > i) && (src[it] != '\0') && dstsize > 0)
	{
		dst[i] = src[it];
		i++;
		it++;
	}
	if (it != 0)
		dst[i] = '\0';
	if (dstsize <= i)
		return (dstsize + srclen);
	return (dstlen + srclen);
}
