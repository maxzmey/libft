/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 20:21:00 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 17:44:15 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int len;

	len = ft_strlen(s1);
	while (*s2)
	{
		s1[len++] = *s2;
		s2++;
	}
	s1[len] = '\0';
	return (s1);
}
