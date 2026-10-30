#include "libft.h"

static void *multiple(void *content){
    int *n;

    n = malloc(sizeof(int));
    if(!n)
        return NULL;
    *n = *(int *)content;
    *n *= 2;
    return n;
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)){
    t_list *new_lst;
    t_list *new_node;
    void *new_content;

    if (!f || !del)
        return NULL;
    new_lst = NULL;
    while (lst != NULL){
        new_content = f(lst -> content);
        if (!new_content){
            ft_lstclear(&new_lst, del);
            return NULL;
        }
        new_node = ft_lstnew(new_content);
        if (!new_node){
            del(new_content);
            ft_lstclear(&new_lst, del);
            return NULL;
        }
        ft_lstadd_back(&new_lst, new_node);
        lst = lst->next;
    }
    return new_lst;
}
int main(){
    int a = 32;
    int b = 12;
    int c = 22;

    t_list *head;
    t_list *n1 = malloc(sizeof(t_list));
    t_list *n2 = malloc(sizeof(t_list));
    t_list *n3 = malloc(sizeof(t_list));
    if (!n1 || !n2 || !n3){
        free(n3);
        free(n2);
        free(n1);
        return 1;
    }

    head = n1;
    n1->content = &a;
    n1->next = n2;
    n2->content = &b;
    n2->next = n3;
    n3->content = &c;
    n3->next = NULL;

    t_list *new_lst = ft_lstmap(head, multiple, free);
    if (!new_lst){
        free(n3);
        free(n2);
        free(n1);
        return 1;
    }

    printf("%d, %d, %d\n", a, b, c);
    printf("%d\n", *(int *)new_lst->content);
    printf("%d\n", *(int *)new_lst->next->content);
    printf("%d\n", *(int *)new_lst->next->next->content);
    if (new_lst->next->next->next == NULL)
        printf("NULL\n");
    ft_lstclear(&new_lst, free);
    free(n3);
    free(n2);
    free(n1);
    return 0;
}