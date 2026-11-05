/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:02:00 by haelkhad          #+#    #+#             */
/*   Updated: 2026/10/30 18:26:46 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
<<<<<<< HEAD:libft/ft_memcmp.c
	const unsigned char *str1;
	const unsigned char *str2;
	size_t i;
=======
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
>>>>>>> f6740fe (update libft):libft.a/ft_memcmp.c

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n){
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return 0;
}