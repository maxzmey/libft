/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:07:59 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/18 12:01:05 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_nbr(int n)
{
	int res;

	res = 0;
	if (n <= 0)
		res++;
	while (n)
	{
		if (n / 10 || n % 10)
			res++;
		n /= 10;
	}
	return (res);
}

char			*ft_itoa(int n)
{
	char	*res;
	int		nbr;
	int		pol;

	pol = 1;
	nbr = find_nbr(n);
	if (!(res = ft_memalloc(nbr + 1)))
		return (NULL);
	if (n < 0)
		pol = -1;
	res[nbr--] = '\0';
	while (nbr >= 0)
	{
		res[nbr--] = (n % 10) * pol + '0';
		n /= 10;
	}
	if (pol == -1)
		res[0] = '-';
	return (res);
}
