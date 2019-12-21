/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 18:06:21 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/11 19:29:28 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		len;
	char	*buf;

	len = 0;
	if (s)
	{
		while (*s == ' ' || *s == '\n' || *s == '\t')
			s++;
		if (*s == '\0')
			return (ft_strdup(s));
		len = ft_strlen(s);
		while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
			len--;
		if (!(buf = ft_strnew(len)))
			return (NULL);
		if (len > 0)
			buf = ft_strncpy(buf, s, len);
		buf[len] = '\0';
		return (buf);
	}
	return (NULL);
}
