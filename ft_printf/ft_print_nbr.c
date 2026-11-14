/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 12:02:51 by haelkhad          #+#    #+#             */
/*   Updated: 2026/11/14 12:22:28 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	int		count;
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		count++;
	}
	if (n > 9)
		count += ft_print_nbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
