#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 20

int i_rand(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

void wypisz_i(int *poczatek, int *koniec)
{
    while (poczatek < koniec)
        printf("%4d ", *poczatek++);
    printf("\n");
    return;
}

int main(void)
{
    int *table = malloc(n * sizeof(int));
    int *poczatek = table;

    int size_p = 0; // Poprawiona inicjalizacja
    int size_n = 0; // Poprawiona inicjalizacja

    for (int i = 0; i < n; i++)
    {
        table[i] = i_rand(-5, 5);
        if (table[i] % 2 == 0)
        {
            size_p++;
        }
        else
        {
            size_n++;
        }
    }

    int *arg_p = malloc(size_p * sizeof(int));
    int *arg_n = malloc(size_n * sizeof(int));

    int *pocz_arg_p = arg_p;
    int *pocz_arg_n = arg_n;

    for (int i = 0; i < n; i++)
    {
        if (table[i] % 2 == 0)
        {
            *arg_p = table[i];
            arg_p++;
        }
        else
        {
            *arg_n = table[i];
            arg_n++;
        }
    }

    printf("table --> ");
    wypisz_i(poczatek, poczatek + n);

    printf("\narg_p --> ");
    wypisz_i(pocz_arg_p, pocz_arg_p + size_p);
    printf("\narg_n --> ");
    wypisz_i(pocz_arg_n, pocz_arg_n + size_n);

    free(table);
    free(pocz_arg_n);
    free(pocz_arg_p);

    return 0;
}
