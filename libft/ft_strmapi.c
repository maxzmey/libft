/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:19:34 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/11 16:23:00 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			str[nb] = f(nb, s[nb]);
			nb++;
		}
		str[nb] = '\0';
	}
	return (str);
}
