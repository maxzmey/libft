/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:08:36 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 17:33:02 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			nb;
	unsigned char	*buf1;
	unsigned char	*buf2;

	nb = 0;
	buf1 = (unsigned char *)dst;
	buf2 = (unsigned char *)src;
	while (nb < n)
	{
		buf1[nb] = buf2[nb];
		nb++;
	}
	return (dst);
}
