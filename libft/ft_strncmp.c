/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:13:24 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 18:12:56 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			nb;
	unsigned char	*buf1;
	unsigned char	*buf2;

	nb = 0;
	buf1 = (unsigned char *)s1;
	buf2 = (unsigned char *)s2;
	while (nb < n && (buf1[nb] || buf2[nb]))
	{
		if (buf1[nb] != buf2[nb])
			return (buf1[nb] - buf2[nb]);
		nb++;
	}
	return (0);
}
