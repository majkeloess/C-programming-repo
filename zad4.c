#include <stdio.h>
#include <stdlib.h>

struct tnode {
    char value;
    struct tnode *next;
};

void add_end(struct tnode **head, struct tnode *elem) {
    elem->next = NULL;
    if (*head == NULL) {
        *head = elem;
    } else {
        struct tnode *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = elem;
    }
}

void print_list(struct tnode *head) {
    printf("head");
    while (head != NULL) {
        printf(" -> ['%c']", head->value);
        head = head->next;
    }
    printf(" -> NULL\n");
}

void free_list(struct tnode *head) {
    struct tnode *current = head;
    while (current != NULL) {
        struct tnode *next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    struct tnode *head_1 = NULL;

    struct tnode *elem_a = (struct tnode *)malloc(sizeof(struct tnode));
    if (elem_a == NULL) {
        printf("Błąd alokacji pamięci.\n");
        return 1;
    }
    elem_a->value = 'a';

    struct tnode *elem_c = (struct tnode *)malloc(sizeof(struct tnode));
    if (elem_c == NULL) {
        printf("Błąd alokacji pamięci.\n");
        return 1;
    }
    elem_c->value = 'c';

    struct tnode *elem_v = (struct tnode *)malloc(sizeof(struct tnode));
    if (elem_v == NULL) {
        printf("Błąd alokacji pamięci.\n");
        return 1;
    }
    elem_v->value = 'v';

    struct tnode *elem_f = (struct tnode *)malloc(sizeof(struct tnode));
    if (elem_f == NULL) {
        printf("Błąd alokacji pamięci.\n");
        return 1;
    }
    elem_f->value = 'f';

    struct tnode *elem_t = (struct tnode *)malloc(sizeof(struct tnode));
    if (elem_t == NULL) {
        printf("Błąd alokacji pamięci.\n");
        return 1;
    }
    elem_t->value = 't';

    add_end(&head_1, elem_a);
    add_end(&head_1, elem_c);
    add_end(&head_1, elem_v);
    add_end(&head_1, elem_f);
    add_end(&head_1, elem_t);

    print_list(head_1);

    free_list(head_1);

    return 0;
}
