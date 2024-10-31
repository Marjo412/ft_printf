/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <mrosset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:41:56 by mrosset           #+#    #+#             */
/*   Updated: 2024/10/31 11:57:39 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_string(const char *str)
{
    int i;

    i = 0;
    if (str == NULL)
        return (NULL);
    while (str[i] != '\0')
    {
        write (1, &str[i], 1);
        i++;
    }
    return (i);
}