#include "libft.h"

// static void increment(void *content){
//     int *n = content;
//     (*n)++;
// }

void ft_lstiter(t_list *lst, void (*f)(void *)){
    while(lst != NULL){
        f(lst->content);
        lst = lst->next;
    }
}