/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:12:26 by haelkhad          #+#    #+#             */
/*   Updated: 2026/10/15 16:49:14 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char *big1;
	char *little1;
	size_t i;
	size_t j;

	big1 = (char *)big;
	little1 = (char *)little;
	if (little1[0] == '\0')
		return (big1);
	i = 0;
	while (i < len && big1[i])
	{
		j = 0;
		while (big1[i + j] && little1[j] && big1[i + j] == little1[j])
			j++;
		if (little1[j] == '\0')
			return (&big1[i]);
		i++;
	}
	return (0);
}
