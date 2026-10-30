#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new){
    if ( *lst == NULL){
        *lst = new;
        return;
    }
    
    t_list *head;
    head = *lst;
    while (head->next != NULL)
        head = head->next;
    head->next = new;
}

// int main(){
//     int a = 32;
//     int b = 22;
//     int c = 12;
//     int d = 43;


//     t_list *head;
//     t_list *n1 = malloc(sizeof(t_list));
//     t_list *n2 = malloc(sizeof(t_list));
//     t_list *n3 = malloc(sizeof(t_list));
//     if (!n1 || !n2 || !n3){
//         free(n3);
//         free(n2);
//         free(n1);
//         return 1;
//     }

//     head = n1;
//     n1->content = &a;
//     n1->next = n2;
//     n2->content = &b;
//     n2->next = n3;
//     n3->content = &c;
//     n3->next = NULL;

//     t_list *new_node = malloc(sizeof(t_list));
//     if (!new_node){
//         free(n3);
//         free(n2);
//         free(n1);
//         return 1;
//     }
//     new_node->content = &d;
//     new_node->next = NULL;

//     ft_lstadd_back(&head, new_node);
//     printf("%d\n", *(int *)head->content);
//     printf("%d\n", *(int *)head->next->content);
//     printf("%d\n", *(int *)head->next->next->content);
//     printf("%d\n", *(int *)head->next->next->next->content);
//     free(new_node);
//     free(n3);
//     free(n2);
//     free(n1);
//     return 0;
// }