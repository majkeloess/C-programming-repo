#include <stdio.h>
#include <stdlib.h>
// co ja chce zrobić???
// chce napisać program, który w argumencie wywołania programu podaje ilość elementów do listy, połowę dodaje na począrek listy, drugą połowę na koniec
// czyli potrzebuje funkcji add_front, add_end, print
// jak to zrobię to jeszcze zaimplementować funkcję?procedurę? usuwania nodów

struct tnode
{
      int value;
      struct tnode *next;
};

void add_front(struct tnode **head, int val)
{
      struct tnode *new_node = (struct tnode *)malloc(sizeof(struct tnode));
      new_node->value = val;
      new_node->next = NULL;

      if (*head == NULL)
      {
            *head = new_node;
      }
      else
      {
            new_node->next = *head;
            *head = new_node;
      }
}
void add_end(struct tnode **head, int val)
{
      struct tnode *new_node = (struct tnode *)malloc(sizeof(struct tnode));
      new_node->value = val;
      new_node->next = NULL;

      if (*head == NULL)
      {
            *head = new_node;
            return;
      }

      struct tnode *current = *head;

      while (current->next != NULL)
      {
            current = current->next; // przechodzę na koniec listy
      }

      current->next = new_node; // podpinam na koniec new_node
}

void print_list(struct tnode *head)
{
      printf("head");
      struct tnode *current = head;
      while (current != 0) // robie pętle póki current nie jest NULLEM
      {
            printf(" -> ['%d']", current->value); // wyświetlam wartość
            current = current->next;              // inkrementuje ale jakby po strukturze
      }
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

int findMaxValue(struct tnode *head)
{

      int maxValue = head->value; // Inicjalizujemy maksymalną wartość wartością pierwszego elementu

      // Przechodzimy przez listę i aktualizujemy maksymalną wartość, jeśli znajdziemy większą
      struct tnode *current = head->next;
      while (current != NULL)
      {
            if (current->value > maxValue)
            {
                  maxValue = current->value;
            }
            current = current->next;
      }

      return maxValue;
}
void deleteFirstNode(struct tnode **head)
{
      if (*head == NULL)
      {
            printf("Lista jest pusta. Nie można usunąć elementu.\n");
            return;
      }

      struct tnode *temp = *head;
      *head = (*head)->next;
      free(temp);
}

int main() // int argc, int *argv[])
{
      int n = 10; // atoi(argv[1]);

      struct tnode *head = NULL;

      for (int i = 0; i < n; i++)
      {
            add_front(&head, i);
      }
      for (int i = 0; i < n; i++)
      {
            add_end(&head, i);
      }

      print_list(head);
      free_list(head);
      print_list(head);

      return 0;
}