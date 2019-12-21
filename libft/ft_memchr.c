/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 17:27:33 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 17:45:40 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			nb;
	unsigned char	*buf;

	nb = 0;
	buf = (unsigned char *)s;
	while (nb < n)
	{
		if (buf[nb] == (unsigned char)c)
			return (buf + nb);
		nb++;
	}
	return (NULL);
}
