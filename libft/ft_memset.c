/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:49:46 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 17:39:37 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			nb;
	unsigned char	*buf;

	buf = b;
	nb = 0;
	while (nb < len)
	{
		buf[nb] = (unsigned char)c;
		nb++;
	}
	return (b);
}
