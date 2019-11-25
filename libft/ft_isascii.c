/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 12:20:36 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/12 21:23:02 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isascii(int arg)
{
	if ((arg >= 0) && (arg <= 127))
		return (1);
	else
		return (0);
}
