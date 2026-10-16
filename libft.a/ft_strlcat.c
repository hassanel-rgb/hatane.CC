/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:11:42 by haelkhad          #+#    #+#             */
/*   Updated: 2026/10/14 14:34:06 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	l = 0;
	while (i < size && dst[i])
		i++;
	dst_len = i;
	while (src[l])
		l++;
	src_len = l;
	if (dst_len == size)
		return (size + src_len);
	l = 0;
	while (i < size - 1 && src[l])
		dst[i++] = src[l++];
	dst[l] = '\0';
	return (dst_len + src_len);
}
