/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:13:07 by albertini         #+#    #+#             */
/*   Updated: 2023/11/03 17:17:11 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned long nb, char spe)
{
	char	*sym_min;
	char	*sym_maj;
	int		count;

	sym_min = "0123456789abcdef";
	sym_maj = "0123456789ABCDEF";
	count = 0;
	if (nb >= 16)
	{
		count += ft_print_hexa(nb / 16, spe);
		return (count + ft_print_hexa(nb % 16, spe));
	}
	else if (nb < 16 && spe == 'x')
		count += ft_print_char(sym_min[nb]);
	else if (nb < 16 && spe == 'X')
		count += ft_print_char(sym_maj[nb]);
	return (count);
}
