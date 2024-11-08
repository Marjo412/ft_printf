/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <mrosset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:53:34 by mrosset           #+#    #+#             */
/*   Updated: 2024/11/08 09:35:09 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*int	ft_putnbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += write(1, "-", 1);
		n *= -1;
	}
	if (n < 16)
	{
		count += write(1, "n + '0'", 1);
		return (count);
	}
	else
	{
		ft_putnbr(n / 16);
		ft_putnbr(n % 16);
	}
	return (count);
}*/

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
	if (n >= 16)
		count += ft_print_hexa(n / 16, c);
	count += write(1, &base[n % 16], 1);
	return (count);
}
