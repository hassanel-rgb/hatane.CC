/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:14:52 by haelkhad          #+#    #+#             */
/*   Updated: 2026/10/15 16:49:59 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c){
    int i;

    i = 0;
    i = ft_strlen(s);
    while (i > 0){
        if (s[i] == c)
            return (char *)(&s[i]);
        i--;
    }
    if (s[i] == c)
        return (char *)(&s[i]);
    return (NULL);
}
