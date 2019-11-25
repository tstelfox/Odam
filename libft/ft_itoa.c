/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 11:23:23 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/18 18:58:05 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_desc(int n, int count, char *str)
{
	count--;
	if (n == 0)
		str[count] = '0';
	while (n > 0)
	{
		str[count] = (n % 10) + '0';
		n /= 10;
		count--;
	}
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		n = n * -1;
		while (n > 0)
		{
			str[count] = (n % 10) + '0';
			n /= 10;
			count--;
		}
	}
	return (str);
}

static int	ft_count(int n)
{
	int count;

	count = 0;
	if (n == 0)
		count = 1;
	if (n < 0)
	{
		count++;
		while (n < 0)
		{
			n = n / 10;
			count++;
		}
		return (count);
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char	*a;
	int		i;
	int		c;

	i = 0;
	c = ft_count(n);
	a = (char *)malloc(sizeof(char) * (c + 1));
	if (a == 0)
		return (0);
	if (n < 0)
		a[0] = '-';
	a[c] = '\0';
	a = (ft_desc(n, c, a));
	return (a);
}
