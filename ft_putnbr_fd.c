/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:17:59 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/29 21:05:04 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		if (n == (-2147483648))
		{
			i += ft_putchar_fd('-', 1);
			i += ft_putstr_fd("2147483648", 1);
		}
		else
		{
			i += ft_putchar_fd('-', 1);
			i += ft_putnbr_fd(-n, 1);
		}
	}
	else if (n >= 10)
	{
		i += ft_putnbr_fd(n / 10, 1);
		i += ft_putnbr_fd(n % 10, 1);
	}
	else
		i += ft_putchar_fd(n + '0', fd);
	return (i);
}
