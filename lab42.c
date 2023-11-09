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
      srand(time(NULL));

      int *table = malloc(n * sizeof(int));
      int *poczatek = table;

      int size_p = 0;
      int size_n = 0;
      int *arg_p = malloc(sizeof(int));
      int *arg_n = malloc(sizeof(int));
      int *pocz_arg_p = arg_p;
      int *pocz_arg_n = arg_n;

      while (poczatek < table + n)
      {
            *poczatek = i_rand(-5, 5);
            poczatek++;
      }
      printf("%p %p %p\n", table, poczatek, table + n);
      printf("table --> ");
      wypisz_i(table, table + n);
      int size_table = n;

      for (int i = n - 1; i >= 0; i--)
      {
            if (table[i] % 2 == 0)
            {
                  arg_p = realloc(arg_p, (++size_p) * sizeof(int));
                  arg_p[size_p - 1] = table[i];
                  table = realloc(table, (--size_table) * sizeof(int));
                  //printf("P ");
            }
            else
            {
                  arg_n = realloc(arg_n, (++size_n) * sizeof(int));
                  arg_n[size_n - 1] = table[i];
                  table = realloc(table, (--size_table) * sizeof(int));
                  //printf("N ");
            }
      }

      printf("\narg_p -->");
      for (int i = 0; i < size_p; i++)
      {
            printf("%5d", arg_p[i]);
      }
      printf("\narg_n -->");
      for (int i = 0; i < size_n; i++)
      {
            printf("%5d", arg_n[i]);
      }
      

      free(table);
      free(arg_n);
      free(arg_p);
      table = NULL;
      poczatek = NULL;

      return 0;
}