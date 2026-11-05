/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:36:20 by haelkhad          #+#    #+#             */
/*   Updated: 2026/11/05 12:24:40 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"


static int	b_len(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	long	nb;

	nb = n;
	len = b_len(nb);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		s[0] = '0';
	while (nb > 0)
	{
		s[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s);
<<<<<<< HEAD:libft/ft_itoa.c
}
=======
}
>>>>>>> f6740fe (update libft):libft.a/ft_itoa.c
