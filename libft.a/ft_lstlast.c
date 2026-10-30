#include "libft.h"

t_list *ft_lstlast(t_list *lst){
    if (lst == NULL)
        return NULL;
    while (lst->next != NULL){
        lst = lst->next;
    }
    return lst;
}

int main (){
    t_list *head;
    t_list *l1 = malloc(sizeof(t_list));
    t_list *l2 = malloc(sizeof(t_list));
    t_list *l3 = malloc(sizeof(t_list));

    head = l1;
    l1->content = NULL;
    l1->next = l2;
    l2->content = NULL;
    l2->next = l3;
    l3->content = NULL;
    l3->next = NULL;

    printf("%p\n", (void *)ft_lstlast(head));
    free(l3);
    free(l2);
    free(l1);
    return 0;
}