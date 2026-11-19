/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 12:03:16 by haelkhad          #+#    #+#             */
/*   Updated: 2026/11/19 13:37:37 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list ap, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count = ft_print_char(va_arg(ap, int));
	else if (format == 's')
		count = ft_print_str(va_arg(ap, char *));
	else if (format == 'd' || format == 'i')
		count = ft_print_nbr(va_arg(ap, int));
	else if (format == 'u')
		count = ft_print_uns(va_arg(ap, unsigned int));
	else if (format == 'x')
		count = ft_print_hex(va_arg(ap, unsigned int),
				"0123456789abcdef");
	else if (format == 'X')
		count = ft_print_hex(va_arg(ap, unsigned int),
				"0123456789ABCDEF");
	else if (format == 'p')
		count = ft_print_ptr(va_arg(ap, void *));
	else if (format == '%')
		count = ft_print_char('%');
	else
		count = ft_print_char(format);
	return (count);
}

static int	error(va_list ap)
{
	va_end(ap);
	return (-1);
}

int	ft_printf(const char *f, ...)
{
	va_list	ap;
	int		r;
	int		count;
	int		i;

	va_start(ap, f);
	count = 0;
	i = 0;
	while (f[i])
	{
		if (f[i] == '%' && f[i + 1] == '\0')
			return (error(ap));
		else if (f[i] == '%')
			r = ft_format(ap, f[++i]);
		else
			r = ft_print_char(f[i]);
		if (r == -1)
			return (error(ap));
		count += r;
		i++;
	}
	va_end(ap);
	return (count);
}
