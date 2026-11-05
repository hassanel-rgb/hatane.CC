/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:41:12 by haelkhad          #+#    #+#             */
/*   Updated: 2026/10/30 18:35:05 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
<<<<<<< HEAD:libft/ft_strchr.c
	size_t i;
=======
	int	i;
>>>>>>> f6740fe (update libft):libft.a/ft_strchr.c

	i = 0;
	while (s[i])
	{
<<<<<<< HEAD:libft/ft_strchr.c
		if (s[i] == (unsigned char)c)
			return (char *)(&s[i]);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return (char *)(&s[i]);
=======
		if (s[i] == c)
			return ((char *)(&s[i]));
		i++;
	}
	if (s[i] == c)
		return ((char *)(&s[i]));
>>>>>>> f6740fe (update libft):libft.a/ft_strchr.c
	return (NULL);
}
