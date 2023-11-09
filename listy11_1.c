#include <stdio.h>
#include <stdlib.h>

struct tnode 
{
  char value;
  struct tnode *next;
};

void add_front(struct tnode **head, struct tnode *elem)
{
    if (*head == NULL)
    {
        *head = elem;
        elem->next = NULL;
    }
    else
    {
        elem->next = *head;
        *head = elem;
    }
}

void print_list(struct tnode *head)
{
    printf("head");
    struct tnode *current = head;
    while (current != NULL)
    {
        printf(" -> ['%c']", current->value);
        current = current->next;
    }
    printf(" -> Null\n");
}

struct tnode *remove_elements(struct tnode **head, char target)
{
    struct tnode *left = NULL;  //nowa lista
    struct tnode **current = head;

    while (*current != NULL)
    {
        if ((*current)->value == target)
        {
            //usuwanie elementu
            struct tnode *temp = *current;
            *current = (*current)->next;

            //dodawanie do nowej listy
            temp->next = NULL;
            add_front(&left, temp);
        }
        else
        {
            current = &((*current)->next);
        }
    }

    return left;
}

void free_list(struct tnode *head)
{
    struct tnode *current = head;

    while (current != NULL)
    {
        struct tnode *temp = current;
        current = current->next;
        free(temp);
    }
}

int main(void)
{
    struct tnode *head = NULL;
    
    //lista wejsciowa
    struct tnode *node1 = malloc(sizeof(struct tnode));
    struct tnode *node2 = malloc(sizeof(struct tnode));
    struct tnode *node3 = malloc(sizeof(struct tnode));
    struct tnode *node4 = malloc(sizeof(struct tnode));
    struct tnode *node5 = malloc(sizeof(struct tnode));
    struct tnode *node6 = malloc(sizeof(struct tnode));
    struct tnode *node7 = malloc(sizeof(struct tnode));
    struct tnode *node8 = malloc(sizeof(struct tnode));
    struct tnode *node9 = malloc(sizeof(struct tnode));
    struct tnode *node10 = malloc(sizeof(struct tnode));
    struct tnode *node11 = malloc(sizeof(struct tnode));
    
    node1->value = 'a';
    node2->value = 't';
    node3->value = 'o';
    node4->value = 'k';
    node5->value = ' ';
    node6->value = 'a';
    node7->value = 'm';
    node8->value = ' ';
    node9->value = 'a';
    node10->value = 'l';
    node11->value = 'A';
    
    add_front(&head, node11);
    add_front(&head, node10);
    add_front(&head, node9);
    add_front(&head, node8);
    add_front(&head, node7);
    add_front(&head, node6);
    add_front(&head, node5);
    add_front(&head, node4);
    add_front(&head, node3);
    add_front(&head, node2);
    add_front(&head, node1);
    
    //wywolanie a
    //struct tnode *left = remove_elements(&head, 'a');
    //wywolanie j
    struct tnode *left = remove_elements(&head, 'j');
    
    
    printf("Lista wejściowa:\n");
    print_list(head);
    printf("\nLeft: \n");
    print_list(left);
    
    free_list(head);
    free_list(left);
    
    return 0;
}
