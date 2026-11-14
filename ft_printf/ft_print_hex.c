/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 12:02:40 by haelkhad          #+#    #+#             */
/*   Updated: 2026/11/14 12:21:58 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long long nbr, char *hex)
{
	int		count;
	char	c;

	count = 0;
	if (nbr > 15)
		count += ft_print_hex(nbr / 16, hex);
	c = hex[nbr % 16];
	if (write(1, &c, 1) == -1)
		return (-1);
	count++;
	return (count);
}
