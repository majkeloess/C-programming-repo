/*
Przy pomocy funkcji realloc proszę zaalokować tablicę dwuwymiarową liczb zmiennoprzecinkowych
o wymiarach 3x5, tak aby można było ja wypisać procedurą proc
proszę wypisać wywołanie procedury proc dla utworzonej tablicy, a na koniec fragment kodu,
który dokona zwolnienia pamięci
*/
#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 5

void proc(float T[][M], int rows_count)
{
      for (int i = 0; i < rows_count; i++)
      {
            for (int j = 0; j < M; j++)
            {
                  printf("%f ", T[i][j]);
            }
            printf("\n");
      }
}

int main(void)
{
      float(*tab)[M] = realloc(NULL, N * M * sizeof(float)); //jak są tablice 2d to alokuje się 

      for (int i = 0; i < N; i++)
      {
            for (int j = 0; j < M; j++)
            {
                  tab[i][j] = 1;
            }
      }

      proc(tab, N);

      free(tab);
      tab = NULL;

      return 0;
}