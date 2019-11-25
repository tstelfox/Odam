/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/15 17:13:19 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/25 20:25:06 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_free(char **arroios, int i)
{
	if (arroios[i] == 0)
	{
		i--;
		while (i > 0)
		{
			free(arroios[i]);
			i--;
		}
		free(arroios);
		return (1);
	}
	return (0);
}

static int	ft_splitlen(const char *s, int len, char a)
{
	int i;

	i = 0;
	while (s[len] != a && s[len] != '\0')
	{
		i++;
		len++;
	}
	return (i);
}

static char	**ft_strings(char const *s, char c, char **arroios, int i)
{
	int		size;
	int		len;
	int		all;

	len = 0;
	while (s[len])
	{
		all = 0;
		while (s[len] == c)
			len++;
		size = ft_splitlen(s, len, c);
		arroios[i] = (char *)malloc(sizeof(char) * (size + 1));
		if (ft_free(arroios, i))
			return (0);
		while (all < size)
		{
			arroios[i][all] = s[len];
			len++;
			all++;
		}
		arroios[i][all] = '\0';
		i++;
	}
	return (arroios);
}

static int	ft_sep(char const *s, char c)
{
	int i;
	int count;

	count = 0;
	i = 0;
	if (s[i] == 0)
		return (0);
	while (s[i])
	{
		while ((s[i] == c) && (s[i + 1] != '\0'))
			i++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		t;
	int		nos;
	char	**arroios;

	i = 0;
	t = 0;
	if (s == 0)
		return (0);
	nos = ft_sep(s, c);
	arroios = (char **)malloc(sizeof(char *) * (nos + 1));
	if (arroios == 0)
		return (0);
	arroios = ft_strings(s, c, arroios, i);
	if (arroios == 0)
		return (0);
	arroios[nos] = 0;
	return (arroios);
}
