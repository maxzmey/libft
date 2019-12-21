/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:01:03 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/11 16:18:06 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		nb;

	nb = 0;
	str = NULL;
	if (s)
	{
		if (!(str = ft_strnew(ft_strlen((char *)s))))
			return (NULL);
		while (s[nb])
		{
			str[nb] = f(s[nb]);
			nb++;
		}
		str[nb] = '\0';
	}
	return (str);
}
