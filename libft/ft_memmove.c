/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:59:48 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 17:37:00 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int nb;

	nb = 0;
	if (dst > src)
		while ((int)(--len) >= 0)
			((char *)dst)[len] = ((char *)src)[len];
	else
		while (nb < (unsigned int)len)
		{
			((char *)dst)[nb] = ((char *)src)[nb];
			nb++;
		}
	return ((void *)dst);
}
