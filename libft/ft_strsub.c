/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:40:00 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/11 17:10:27 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *buf;

	if (s && ft_strlen(s) > start)
	{
		if (!(buf = ft_strnew(len)))
			return (NULL);
		buf = ft_strcpy(buf, s + start);
		buf[len] = '\0';
		return (buf);
	}
	return (NULL);
}
