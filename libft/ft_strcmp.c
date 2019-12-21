/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 10:08:35 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 18:00:14 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int len1;
	int len2;

	len1 = (int)ft_strlen(s1);
	len2 = (int)ft_strlen(s2);
	if (len2 > len1)
		len1 = len2;
	return (ft_memcmp(s1, s2, len1));
}
