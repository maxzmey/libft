/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenpr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:01:44 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/19 14:14:43 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlenpr(char const *str, char c)
{
	size_t res;

	res = 0;
	while (*str)
		if ((char)*str++ == c)
			res++;
	return (res);
}
