/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:27:40 by haelkhad          #+#    #+#             */
/*   Updated: 2026/10/18 18:27:52 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *ptr;
	size_t total;

	total = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(total + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, total + 1);
	ft_strlcat(ptr, s2, total + 1);
	return (ptr);
}
int main(){
    char *str = ft_strjoin("", "world");
    printf("%s\n", str);
    return 0;
}