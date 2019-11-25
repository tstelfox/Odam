/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 18:30:59 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/25 22:31:26 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	i = 0;
	ch = c;
	while (s[i] || ch == '\0')
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
