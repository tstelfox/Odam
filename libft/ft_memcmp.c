/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 16:02:43 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/25 22:12:50 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > i)
	{
		while (str1[i] == str2[i] && str1)
		{
			i++;
			if (n <= i)
				return (0);
		}
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}
