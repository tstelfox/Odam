/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 15:31:57 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/21 20:48:52 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_end(char const *s1, char const *set, int i, int start)
{
	int k;

	k = 0;
	i = ft_strlen(s1);
	while (i > start)
	{
		i--;
		k = 0;
		while ((s1[i] != set[k]) && (set[k] != '\0'))
			k++;
		if (!set[k])
			break ;
	}
	return (i);
}

static int	ft_start(char const *s1, char const *set)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (s1[i])
	{
		k = 0;
		while ((s1[i] != set[k]) && (set[k] != '\0'))
			k++;
		if (!set[k])
			break ;
		i++;
	}
	return (i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	size_t		start;
	size_t		end;
	char		*fresh;

	i = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set, i, start);
	if (end < start)
		return (ft_calloc(1, 1));
	fresh = ft_substr(s1, start, (end - start + 1));
	return (fresh);
}
