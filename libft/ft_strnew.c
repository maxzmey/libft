/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:09:43 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/11 14:33:44 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*buf;

	buf = (char *)malloc(sizeof(char) * (size + 1));
	if (!(buf))
		return (NULL);
	ft_memset(buf, (int)'\0', size + 1);
	return (buf);
}
