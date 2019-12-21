/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 09:16:05 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 18:27:20 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	if (*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while (*haystack)
	{
		while (haystack[i] == needle[i])
		{
			if (!needle[i + 1])
				return ((char*)haystack);
			i++;
		}
		i = 0;
		haystack++;
	}
	return (NULL);
}
