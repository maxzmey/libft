/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 17:44:19 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 17:31:22 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			nb;
	unsigned char	*buf1;
	unsigned char	*buf2;

	nb = 0;
	buf1 = (unsigned char *)s1;
	buf2 = (unsigned char *)s2;
	while (nb < n)
	{
		if (buf1[nb] != buf2[nb])
			return (buf1[nb] - buf2[nb]);
		nb++;
	}
	return (0);
}
