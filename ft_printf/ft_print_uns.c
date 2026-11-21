/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 12:03:11 by haelkhad          #+#    #+#             */
/*   Updated: 2026/11/21 21:00:09 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uns(unsigned int nb)
{
	int		count;
	char	c;

	count = 0;
	if (nb > 9)
		count += ft_print_uns(nb / 10);
	c = nb % 10 + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	count++;
	return (count);
}
