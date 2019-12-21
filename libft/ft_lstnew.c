/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 12:09:03 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 13:10:13 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *res;

	if (!(res = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		res->content = NULL;
		res->content_size = 0;
	}
	else
	{
		if (!(res->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(res->content, content, content_size);
		res->content_size = content_size;
	}
	res->next = NULL;
	return (res);
}
