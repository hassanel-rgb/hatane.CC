/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:52:38 by haelkhad          #+#    #+#             */
/*   Updated: 2026/10/30 18:26:41 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
<<<<<<< HEAD:libft/ft_memcpy.c
	const unsigned char *s;
	unsigned char *d;
	size_t i;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;

	if (!s || !d)
=======
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	if (!s && !d)
>>>>>>> f6740fe (update libft):libft.a/ft_memcpy.c
		return (0);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}