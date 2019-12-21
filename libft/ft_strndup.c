/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 15:05:48 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 18:18:48 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	int		a;
	int		b;
	char	*res;

	b = 0;
	a = (int)n;
	if (!(res = (char*)malloc(sizeof(*res) * (a + 1))))
		return (NULL);
	res = ft_memcpy(res, s1, a);
	res[a] = '\0';
	return (res);
}
