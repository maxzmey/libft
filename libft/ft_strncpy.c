/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 20:06:17 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 18:17:10 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t nb;

	nb = 0;
	while (nb < len && src[nb] != '\0')
	{
		dst[nb] = src[nb];
		nb++;
	}
	while (nb < len)
		dst[nb++] = '\0';
	return (dst);
}
