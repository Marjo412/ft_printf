/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <mrosset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:44:48 by mrosset           #+#    #+#             */
/*   Updated: 2024/10/31 12:47:29 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    
    while (*format != '\0')
    {
    if (*format == '%')
        format++;
    else if (*format == 'c')
    {}
    else if (*format == 's')
    {}
    else if (*format == 'p')
    {}
    else if (*format == 'd')
    {}
    else if (*format == 'i')
    {}
    else if (*format == 'u')
    {}
    else if (*format == 'x')
    {}
    else if (*format == 'X')
    {}
    else if (*format == '%%')
    }
va_end(args);
}

int main ()
{
    ft_printf();
        return (0);
}