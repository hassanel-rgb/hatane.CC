/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 12:02:59 by haelkhad          #+#    #+#             */
/*   Updated: 2026/11/14 12:22:54 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *p)
{
	int	count;

	count = 0;
	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	count += 2;
	return (count + ft_print_hex((unsigned long long)p,
			"0123456789abcdef"));
}
