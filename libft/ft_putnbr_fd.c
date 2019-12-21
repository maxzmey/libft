/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:20:45 by mkhomich          #+#    #+#             */
/*   Updated: 2018/11/12 17:27:51 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + 48, fd);
	}
	else if (n < -10)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n / -10, fd);
		ft_putchar_fd(((n % 10) * -1) + 48, fd);
	}
	else if (n < 10 && n >= 0)
		ft_putchar_fd(n + 48, fd);
	else if (n > -10 && n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd((n * -1) + 48, fd);
	}
}
