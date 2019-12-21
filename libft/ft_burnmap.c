/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_burnmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 14:40:53 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/19 15:21:13 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_burnmap(size_t x, size_t y)
{
	size_t	line;
	char	**res;

	line = 0;
	if (x && y)
	{
		if (!(res = ft_memalloc(sizeof(char*) * (y + 1))))
			return (NULL);
		if (x && y)
			while (line < y)
				if (!(res[line++] = ft_strnew(x + 1)))
					return (NULL);
		return (res);
	}
	return (NULL);
}
