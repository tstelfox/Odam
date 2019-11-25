/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 13:12:01 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/12 21:22:59 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int arg)
{
	if (((arg >= 'a') && (arg <= 'z')) ||
	((arg >= 'A') && (arg <= 'Z')))
		return (1);
	else
		return (0);
}
