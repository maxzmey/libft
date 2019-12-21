/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 15:10:53 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 15:25:05 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *str, size_t prev_size, size_t new_size)
{
	void	*new;

	if (!str)
		return (NULL);
	if (!(new = ft_memalloc(new_size)))
	{
		free(str);
		return (NULL);
	}
	ft_memcpy(new, str, prev_size < new_size ? prev_size : new_size);
	free(str);
	return (new);
}
