#include <stdio.h>
#include <stdlib.h>

struct tnode 
{
  char value;
  struct tnode *next;
};

void add_front(struct tnode **head, struct tnode *elem)
{
    if(*head == 0)
    {
        *head = elem;
        elem ->next = 0;
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
    while(current != 0)
    {
        printf(" -> ['%c']",current->value);
        current = current->next;
    }    
}

int main(void)
{
    struct tnode *head = 0;

    struct tnode *elem_t = (struct tnode *)malloc(sizeof(struct tnode));
    elem_t ->value ='t';
    add_front(&head, elem_t);

    struct tnode *elem_f = (struct tnode *)malloc(sizeof(struct tnode));
    elem_f ->value ='f';
    add_front(&head, elem_f);

    struct tnode *elem_v = (struct tnode *)malloc(sizeof(struct tnode));
    elem_v ->value ='v';
    add_front(&head, elem_v);

    struct tnode *elem_c = (struct tnode *)malloc(sizeof(struct tnode));
    elem_c ->value ='c';
    add_front(&head, elem_c);

    struct tnode *elem_a = (struct tnode *)malloc(sizeof(struct tnode));
    elem_a ->value ='a';
    add_front(&head, elem_a);

    print_list(head);

    puts(" -> NULL\n");

    return 0;
}