/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:14:34 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/12 16:55:17 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + 48);
	}
	else if (n < -10)
	{
		ft_putchar('-');
		ft_putnbr(n / -10);
		ft_putchar(((n % 10) * -1) + 48);
	}
	else if (n < 10 && n >= 0)
		ft_putchar(n + 48);
	else if (n > -10 && n < 0)
	{
		ft_putchar('-');
		ft_putchar((n * -1) + 48);
	}
}
