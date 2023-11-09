#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int suma(int *p, int len)
{
      int sum = 0;

      for (int i = 0; i < len; i++)
            sum += p[i];

      return sum;
}
int compare(const void *a, const void *b)
{
      return *(const int *)a - *(const int *)b;
}

void print_tab_all(int x, int y, int a[][y])
{
      int i, j;
      for (i = 0; i < x; i++)
      {
            for (j = 0; j < y; j++)
                  printf("%5d", a[i][j]);
            printf("\n");
      }
      return;
}

void wypisz_i(int *poczatek, int *koniec)
{
      while (poczatek < koniec)
            printf("%4d ", *poczatek++);
      printf("\n");
      return;
}

int proc(size_t rows, size_t columns, int tab[][columns], int var)
{

      qsort(tab, rows * columns, sizeof(int), compare);

      for (size_t i = 0; i < rows; i++)
      {
            int *search = bsearch(&var, *(tab + i), columns, sizeof(int), compare);

            if (search)
            {
                  return i;
            }
      }

      return -1;
}

int main(void)
{
      int tab_A[3][6] = {{1, -4, 1, 2, 11, 6}, {12, 2, 32, 2, 5, 1}, {72, 2, -32, 2, 9, 24}};
      int tab_B[4][3] = {{1, -24, 1}, {9, 32, 2}, {5, 64, 1}, {3, 32, 1}};

      int processed_A = proc(3, 6, tab_A, 69);

      if (processed_A == -1)
      {
            puts("Nie znaleziono danego elementu!");
      }
      else
      {
            printf("Znaleziono element w %d wierszu a to jego zawartosc: \n",processed_A);
            wypisz_i(*(tab_A+processed_A),*(tab_A+processed_A)+6);
      }

      return 0;
}