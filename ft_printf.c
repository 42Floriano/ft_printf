/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:18:48 by falberti          #+#    #+#             */
/*   Updated: 2023/11/03 17:20:29 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_checkandprint_type(char spe, va_list ap)
{
	int	count;

	count = 0;
	if (spe == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (spe == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (spe == 'u')
		count += ft_print_unsigned(va_arg(ap, unsigned int));
	else if (spe == 'i' || spe == 'd')
		count += ft_print_int(va_arg(ap, int));
	else if (spe == 'x' || spe == 'X')
		count += ft_print_hexa(va_arg(ap, unsigned int), spe);
	else if (spe == 'p')
		count += ft_print_ptr(va_arg(ap, long int));
	else if (spe == '%')
		count += ft_print_char('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;
	int		i;

	count = 0;
	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_checkandprint_type(format[i + 1], ap);
			i++;
		}
		else
		{
			count += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(ap);
	return (count);
}
/*
int	main(void)
{
	char	*str;
	int		count_nb_param_un;
	int		count_nb_param_deux;

//	str = (char *)malloc(sizeof(char) * 10 + 1);
//	str = "hello";
//	count_nb_param_un = 0;
//	count_nb_param_deux = 0;
//	count_nb_param_un = ft_printf(" %p %p ", −2147483648 , 2147483647);
//	count_nb_param_deux = printf(" %p %p ", −2147483648 , 2147483647);
//	printf("Mien: %d, original: %d\n", count_nb_param_un, count_nb_param_deux);

	ft_printf("%p\n", (void *)-14523);
	printf("%p", (void *)-14523);
	return (0);
}*/
