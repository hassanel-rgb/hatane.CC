/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:34:38 by haelkhad          #+#    #+#             */
/*   Updated: 2026/10/23 13:11:55 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_strndup(char const *s, int n)
{
	char	*word;
	int	i;

	word = malloc(n + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < n){
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*free_all(char **tab)
{
	int i;

	i = 0;
	while (tab[i]){
		free(tab[i]);
		i++;
	}
	free(tab);
	return NULL;
}

static char	**fill_tab(char const *s, char c, char **tab)
{
	int	i;
	int	len;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		tab[i] = ft_strndup(s, len);
		if (!tab[i])
			return free_all(tab);
		s += len;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	return (fill_tab(s, c, res));
}