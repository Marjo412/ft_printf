/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <mrosset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:53:34 by mrosset           #+#    #+#             */
/*   Updated: 2024/11/03 17:10:46 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		return ;
	}
	else
	{
		ft_putnbr(n / 16);
		ft_putnbr(n % 16);
	}
}

int	ft_print_hexa(unsigned int n, char c)
{
	char	*base;
	int		count;

	count = 0;
	base = "0";
	if (c == 'X')
		base = HEXA_BASE_UPPER;
	else if (c == 'x')
		base = HEXA_BASE_LOWER;
	count += ft_putnbr(n);
	return (count);
}
