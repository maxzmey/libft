/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 19:35:43 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 19:24:41 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		a;
	int		b;
	char	*res;

	b = 0;
	a = (int)ft_strlen(s1);
	if (!(res = (char*)malloc(sizeof(*res) * (a + 1))))
		return (NULL);
	res = ft_memcpy(res, s1, a);
	res[a] = '\0';
	return (res);
}
