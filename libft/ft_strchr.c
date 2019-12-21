/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 08:42:36 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 17:47:34 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *buf;

	buf = (char *)s;
	while (*buf)
	{
		if (*buf == (char)c)
			return (buf);
		buf++;
	}
	if (*buf == (char)c)
		return (buf);
	return (NULL);
}
