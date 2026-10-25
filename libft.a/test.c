#include "libft.h"

typedef struct student{
    char name[50];
    int age;
    struct student *next;
}student;

student *info_student(char *name, int age){
    student *new_node;
    new_node = (student *) malloc(sizeof(student));
    if (new_node == NULL)
        return NULL;
    strcpy(new_node->name, name);
    new_node->age = age;
    new_node->next = NULL;
    return new_node; 
}

int tail_liste(student *head){
    int count;
    count = 0;
    student *courant = head;
    while (courant != NULL){
        courant = courant->next;
        count++;
    }
    return count;
}
void aff_list(student *head){
    student *courant = head;
    while (courant != NULL){
        printf("name : %s -> age : %d\n", courant->name, courant->age);
        courant = courant->next;
    }
    printf("NULL\n");
}
int main(){
    student *head;
    student *first = info_student("khaled", 20);
    student *second = info_student("yassin", 18);
    student *three = info_student("reda", 21);

    head = first;
    first->next = second;
    second->next = three;
    three->next = NULL;

    int taille = tail_liste(head);
    printf("%d\n", taille);
    //aff_list(head);
    //printf("name : %s, age : %d\n", head->name, head->age);
    //printf("age : %d\n", head->age);
    //printf("name : %s, age : %d\n", head->next->name, head->next->age);
    //printf("age : %d\n", head->next->age);
    //printf("name : %s, age : %d\n", head->next->next->name, head->next->next->age);
    //printf("age : %d\n", head->next->next->age);
    free(head);
    return 0;
}