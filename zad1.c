#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 20

typedef union {
    int integer;
    double real;
} Value;

typedef struct {
    char type;
    Value value;
} Number;

void struct_prn(Number num) {
    if (num.type == 'i') {
        printf("%d --> integer\n", num.value.integer);
    } else if (num.type == 'd') {
        printf("%lf --> real\n", num.value.real);
    }
}

void sort_numbers(Number *numbers, int len) {
    int i, j;
    Number temp;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if ((numbers[j].type == 'i' && numbers[j + 1].type == 'd') ||
                (numbers[j].type == numbers[j + 1].type && numbers[j].type == 'd' && numbers[j].value.real > numbers[j + 1].value.real) ||
                (numbers[j].type == numbers[j + 1].type && numbers[j].type == 'i' && numbers[j].value.integer > numbers[j + 1].value.integer)) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int compare_int(const void *a, const void *b) {
    const Number *num1 = (const Number *)a;
    const Number *num2 = (const Number *)b;
    if (num1->type == 'i' && num2->type == 'i') {
        return num1->value.integer - num2->value.integer;
    } else if (num1->type == 'd' && num2->type == 'd') {
        return (num1->value.real > num2->value.real) - (num1->value.real < num2->value.real);
    } else if (num1->type == 'i' && num2->type == 'd') {
        return -1;
    } else {
        return 1;
    }
}

int main(int argc, char *argv[]) {
    srand(time(NULL));

    int len = rand() % (MAX_LEN - 10 + 1) + 10;
    Number NUMBERS[len];

    for (int i = 0; i < len; i++) {
        if (rand() % 2 == 0) {
            NUMBERS[i].type = 'i';
            NUMBERS[i].value.integer = rand() % 11 - 5;
        } else {
            NUMBERS[i].type = 'd';
            NUMBERS[i].value.real = ((double)rand() / RAND_MAX) * 10 - 5;
        }
    }

    // 0.5 - Zapis tablicy NUMBERS do pliku binarnego
    FILE *file = fopen("plik.dat", "wb");
    if (file == NULL) {
        printf("Nie można otworzyć pliku.\n");
        return 1;
    }

    fwrite(NUMBERS, sizeof(Number), len, file);
    fclose(file);

    // 0.5 - Wypisanie wielkości pliku w bajtach
    file = fopen("plik.dat", "rb");
    if (file == NULL) {
        printf("Nie można otworzyć pliku.\n");
        return 1;
    }

    fseek(file, 0L, SEEK_END);
    long int file_size = ftell(file);
    printf("Rozmiar pliku: %ld bajtów\n", file_size);
    fclose(file);

    // Utworzenie tablicy TAB o odpowiedniej wielkości
    Number TAB[file_size / sizeof(Number)];

    // Wczytanie zawartości pliku do tablicy TAB
    file = fopen("plik.dat", "rb");
    if (file == NULL) {
        printf("Nie można otworzyć pliku.\n");
        return 1;
    }

    fread(TAB, sizeof(Number), file_size / sizeof(Number), file);
    fclose(file);

    // Wypisanie zawartości tablicy TAB
    printf("Zawartość tablicy TAB:\n");
    for (int i = 0; i < file_size / sizeof(Number); i++) {
        struct_prn(TAB[i]);
    }

    // Sortowanie tablicy NUMBERS
    sort_numbers(NUMBERS, len);

    // 1 - Wypisanie posortowanej tablicy NUMBERS
    printf("Posortowana tablica NUMBERS:\n");
    for (int i = 0; i < len; i++) {
        struct_prn(NUMBERS[i]);
    }

    // 1 - Wyszukiwanie elementu w tablicy NUMBERS za pomocą bsearch
    if (argc == 3) {
        char type = argv[1][0];
        double value = atof(argv[2]);
        Number search_num;
        search_num.type = type;
        if (type == 'i') {
            search_num.value.integer = (int)value;
        } else {
            search_num.value.real = value;
        }

        Number *result = bsearch(&search_num, NUMBERS, len, sizeof(Number), compare_int);
        if (result != NULL) {
            printf("Liczba %c %.1lf znajduje się pod indeksami:\n", type, value);
            for (int i = 0; i < len; i++) {
                if (NUMBERS[i].type == type) {
                    if ((type == 'i' && NUMBERS[i].value.integer == search_num.value.integer) ||
                        (type == 'd' && NUMBERS[i].value.real == search_num.value.real)) {
                        printf("%d ", i);
                    }
                }
            }
            printf("\n");
        } else {
            printf("Liczba %c %.1lf nie znajduje się w tablicy NUMBERS.\n", type, value);
        }
    }

    return 0;
}
