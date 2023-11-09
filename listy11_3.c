#include <stdio.h>
#include <stdlib.h>

struct tnode 
{
    char value;
  struct tnode * next;
};

void add_end(struct tnode **head, char val)
{
    struct tnode *new_node = (struct tnode *)malloc(sizeof(struct tnode)); //alokuje pamięć na nowy element
    
    new_node -> value = val;        //przypisuje do pola value val 
    new_node -> next = NULL;        //do pola next przypisuje NULL

    if(*head == NULL)   //jeśli head jest NULLEM, czyli lista jest pusta to wtedy nowy utworzony node przypisuje do heada

    {
        *head = new_node;
        return;
    }

    struct tnode *current = *head; //jeśli head nie jest nullem to
    
    while(current->next != NULL)
    {
        current = current -> next;
    }
    
    current -> next = new_node;
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

void free_list(struct tnode *head)
{
    struct tnode *current = head;
    
    while(current != 0)
    {
        struct tnode *temp = current;
        current = current -> next;
        free(temp);
    }
}


int main(void)
{
    struct tnode *head = 0;

    //puts("head ");

    add_end(&head,'t');
    add_end(&head,'f');
    add_end(&head,'v');
    add_end(&head,'c');
    add_end(&head,'a');

    print_list(head);
    free_list(head);

    puts(" -> NULL\n");


    return 0;
}