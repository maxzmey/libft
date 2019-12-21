/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 20:29:59 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 18:10:21 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int len;

	len = ft_strlen(s1);
	while (*s2 && n)
	{
		s1[len++] = *s2;
		s2++;
		n--;
	}
	s1[len] = '\0';
	return (s1);
}
