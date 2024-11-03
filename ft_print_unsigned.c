/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <mrosset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:53:41 by mrosset           #+#    #+#             */
/*   Updated: 2024/11/03 16:51:59 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_un_len(unsigned int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*unsigned_itoa(unsigned int n)
{
	char	*dest;
	size_t	len;

	len = ft_un_len(n);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	if (n == 0)
		dest[0] = '0';
	while (n != 0)
	{
		dest[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (dest);
}

int	ft_print_unsigned(unsigned int n)
{
	char	*s;
	int		count;

	s = unsigned_itoa(n);
	count = ft_print_string(s);
	free(s);
	s = NULL;
	return (count);
}
