/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/10 18:36:55 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/21 18:19:47 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	size;
	char	*subs;

	i = 0;
	k = 0;
	if (!s)
		return (0);
	size = ft_strlen(s);
	if (start >= size)
		return (ft_calloc(1, 1));
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (0);
	while (i < start && s[i] != '\0')
		i++;
	while (k < len && s[i] != '\0')
	{
		subs[k] = s[i];
		k++;
		i++;
	}
	subs[k] = '\0';
	return (subs);
}
