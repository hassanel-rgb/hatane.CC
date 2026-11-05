/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:12:26 by haelkhad          #+#    #+#             */
/*   Updated: 2026/10/30 18:25:18 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
<<<<<<< HEAD:libft/ft_strnstr.c
	size_t i;
	size_t j;
=======
	char	*big1;
	char	*little1;
	size_t	i;
	size_t	j;
>>>>>>> f6740fe (update libft):libft.a/ft_strnstr.c

	if (little[0] == '\0')
		return (char *)(big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return (char *)(&big[i]);
		i++;
	}
	return (NULL);
}