#include <stdio.h>
#include <stdlib.h>

typedef struct tnode
{
      int value;
      struct tnode *next;
} node;

void insert_item_end(node **head, int val)
{
      node *temp = malloc(sizeof(node));

      if (!temp)
            return;
      temp->value = val;
      temp->next = NULL;

      if (*head)
      {
            node *ele = *head;
            for (; ele->next; ele = ele->next)
                  ;

            ele->next = temp;
      }
      else
            *head = temp;
}

node *insert_item_end_scnd(node *head, int val)
{
      node *temp = malloc(sizeof(node));
      if (!temp)
            return head;
      temp->value = val;
      temp->next = NULL;

      if (head)
      {
            node *ele = head;
            while (ele->next)
                  ele = ele->next;
            ele->next = temp;
      }
      else
            head = temp;

      return head;
}

node *insert_item_begin(node *head, int val)
{
      node *temp = malloc(sizeof(node));
      
      if (!temp)
      {
            printf("Brak pamieci!!!\n");
            return head;
      }
      temp->value = val;
      temp->next = head;
      return temp;
}

void print_list(const node *elem)
{
      if (!elem)
      {
            printf("Lista jest pusta.");
            return;
      }
      for (; elem; elem = elem->next)
            printf("[%p]=%d->%p\n", elem, elem->value, elem->next);
}

node *delete_all(node *elem)
{
      while (elem)
      {
            node *next = elem->next;
            printf("Usuwam element %p.\n", elem);
            free(elem);
            elem = next;
      }
      return NULL;
}

node *search_f(node *elem, int key)
{
      for (; elem && elem->value != key; elem = elem->next)
            ;

      return elem;
}
node *search_w(node *elem, int key)
{
      while (elem && elem->value != key)
            elem = elem->next;

      return elem;
}

node *del_nod(node *head, int key)
{
      node *cur = head, *prev = NULL;
      for (; cur && cur->value != key; prev = cur, cur = cur->next)
            ;
      if (!cur)
            return head; // key was not found
      if (!prev)
            head = head->next; // key was head
      else
            prev->next = cur->next;
      free(cur);
      return head;
}

node *rev_all(node *head)
{
      node *cur = head;  // aktualny
      node *prev = NULL; // poprzedni
      node *next = NULL; // nastepny
      while (cur)
      {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
      }
      return prev;
}

int main(void)
{
      node *head = insert_item_begin(NULL, 6);
      head = insert_item_begin(head, 16);
      head = insert_item_begin(head, 26);
      insert_item_end(&head, 126);
      head = insert_item_end_scnd(head, 226);
      print_list(head);
      head = delete_all(head);

      return 0;
}
