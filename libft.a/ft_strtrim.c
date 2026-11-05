/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:16:29 by haelkhad          #+#    #+#             */
/*   Updated: 2026/10/21 14:49:06 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	s_len;
	size_t	e_len;
	size_t	total;

	if (!s1 || !set)
		return (NULL);
	s_len = ft_strlen(s1) - 1;
	while (s_len > 0 && ft_strchr(set, s1[s_len]))
		s_len--;
	e_len = 0;
	while (e_len < s_len && ft_strchr(set, s1[e_len]))
		e_len++;
	total = s_len - e_len + 1;
	p = malloc(total + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s1 + e_len, total);
	p[total] = '\0';
	return (p);
}
