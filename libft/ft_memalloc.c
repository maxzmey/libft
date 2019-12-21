/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:36:58 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/11 13:55:04 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*buf;

	if (!(buf = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	buf = ft_memset(buf, 0, size);
	return (buf);
}
