/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <mrosset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:05:56 by mrosset           #+#    #+#             */
/*   Updated: 2024/10/31 11:57:15 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h> /*write*/
# include <stdio.h> /*printf*/
# include <stdarg.h> /*va_list*/
# include <stdlib.h> /*malloc*/

/*int ft_printf(const char *format, ...);*/
int ft_print_char(char c);
int ft_print_string(const char *str);

#endif
