/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 14:06:17 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 14:33:54 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *res;
	t_list *buf;

	buf = f(lst);
	res = buf;
	if (lst && f)
	{
		while (lst->next != NULL)
		{
			lst = lst->next;
			if (!(buf->next = f(lst)))
			{
				free(buf->next);
				return (NULL);
			}
			buf = buf->next;
		}
		return (res);
	}
	return (NULL);
}
