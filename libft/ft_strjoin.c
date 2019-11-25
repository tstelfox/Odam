/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/10 18:56:16 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/25 22:24:41 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*bruh;

	if (!s1 || !s2)
		return (0);
	i = 0;
	k = 0;
	bruh = (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (bruh == 0)
		return (0);
	while (s1[i])
	{
		bruh[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		bruh[i] = s2[k];
		k++;
		i++;
	}
	bruh[i] = '\0';
	return (bruh);
}
