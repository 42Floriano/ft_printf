/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:15:23 by falberti          #+#    #+#             */
/*   Updated: 2023/11/03 17:21:28 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_int(long nb);
int	ft_print_unsigned(unsigned int nb);
int	ft_print_hexa(unsigned long nb, char spe);
int	ft_print_ptr(long int ptr);
int	ft_printf(const char *format, ...);

#endif