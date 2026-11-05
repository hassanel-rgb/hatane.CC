/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haelkhad <haelkhad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:38:11 by haelkhad          #+#    #+#             */
/*   Updated: 2026/10/30 18:38:12 by haelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int main(){
//     t_list *head;
//     t_list *num1 = malloc(sizeof(t_list));
//     t_list *num2 = malloc(sizeof(t_list));
//     t_list *num3 = malloc(sizeof(t_list));

//     head = num1;
//     num1->content = NULL;
//     num1->next = num2;
//     num2->content = NULL;
//     num2->next = num3;
//     num3->content = NULL;
//     num3->next = NULL;

//     unsigned int num = ft_lstsize(head);
//     printf("%u\n", num);
//     free(num3);
//     free(num2);
//     free(num1);
//     return (0);
// }