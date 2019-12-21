/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 20:36:54 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 18:06:24 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	lena;
	size_t	lend;

	len = ft_strlen(dst);
	lend = ft_strlen(dst);
	lena = ft_strlen(src);
	while (*src && len + 1 < size)
	{
		dst[len] = *src;
		src++;
		len++;
	}
	dst[len] = '\0';
	if (size < lend)
		return (size + lena);
	return (lena + lend);
}
