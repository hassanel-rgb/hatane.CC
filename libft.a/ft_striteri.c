/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:59:35 by haelkhad          #+#    #+#             */
/*   Updated: 2026/10/30 18:25:53 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	lower(unsigned int c, char *p)
// {
// 	(void)c;
// 	if (*p >= 'A' && *p <= 'Z')
// 		*p += 32;
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
