/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <mrosset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:53:37 by mrosset           #+#    #+#             */
/*   Updated: 2024/11/06 11:02:38 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa_long(unsigned long n, char c)
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
		count += ft_print_hexa_long(n / 16, c);
	count += write(1, &base[n % 16], 1);
	return (count);
}

int	ft_print_pointer(void *ptr)
{
	int				count;
	unsigned long	address;

	address = (unsigned long)ptr;
	count = ft_print_string("0x");
	count += ft_print_hexa_long(address, 'x');
	return (count);
}

/*0x : prefixe de l'adresse*/
/*utilisation d'un unsigned long pour permettre de capturer l'adresse 
complète du pointeur.*/
/* ligne 26 : appel a la recursion pour afficher l'entier en hexadecimal*/