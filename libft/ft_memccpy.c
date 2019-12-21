/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:23:13 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 17:13:51 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
		if (buf2[nb] == (unsigned char)c)
			return (buf1 + nb + 1);
		nb++;
	}
	return (NULL);
}
