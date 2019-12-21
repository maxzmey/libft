/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:27:48 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/19 14:44:14 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_pr(char const *str, char c)
{
	int len_w;

	len_w = 0;
	while (str[len_w] != '\0' && str[len_w] != c)
		len_w++;
	return (len_w);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**buf;
	int		line;
	int		w;

	line = 0;
	if (s)
	{
		if (!(buf = ft_memalloc(sizeof(char*) * (ft_strlenpr(s, c) + 2))))
			return (NULL);
		while (*s)
		{
			w = find_pr(s, c);
			if (w)
			{
				if (!(buf[line] = ft_strnew(w)))
					return (NULL);
				ft_strncpy(buf[line++], s, w);
				s += w;
			}
			else
				s++;
		}
		return (buf);
	}
	return (NULL);
}
