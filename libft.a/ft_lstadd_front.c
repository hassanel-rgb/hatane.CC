/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:38:54 by haelkhad          #+#    #+#             */
/*   Updated: 2026/10/30 18:23:38 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list *lst;
// 	t_list *new;

// 	lst = malloc(sizeof(t_list));
// 	new = malloc(sizeof(t_list));

// 	if (!lst || !new)
// 		return (1);

// 	lst->content = "10";
// 	lst->next = NULL;

// 	new->content = "5";
// 	new->next = NULL;

// 	ft_lstadd_front(&lst, new);

// 	printf("%s\n", (char *)lst->content);
// 	printf("%s\n", (char *)lst->next->content);

// 	free(lst->next);
// 	free(new);
// 	return (0);
// }