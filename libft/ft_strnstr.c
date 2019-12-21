/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 09:40:37 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 18:22:20 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	if (*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while (*haystack && len)
	{
		while (haystack[i] == needle[i] && i <= (int)len)
		{
			if (!needle[i + 1])
				return ((char*)haystack);
			i++;
		}
		i = 0;
		haystack++;
		len--;
	}
	return (NULL);
}
