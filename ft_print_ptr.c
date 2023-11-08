/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:12:06 by albertini         #+#    #+#             */
/*   Updated: 2023/11/03 17:20:39 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(long int ptr)
{
	int					count;
	unsigned long		nb;

	nb = (unsigned long)ptr;
	count = 0;
	count += write(1, "0x", 2);
	count += ft_print_hexa(nb, 'x');
	return (count);
}
