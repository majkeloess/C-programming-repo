#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int find_min_ind(int *T_F, int *T_L)
{ // poczatek i koniec (T_F - wskaznik na pierwszy element, T_L wskaznik za ostatni element) obszaru tablicy gdzie szukamy minimum
      int min = 0;
      for (int i = 1; i < T_L - T_F; i++)
            if (T_F[min] > T_F[i])
                  min = i;

      return min;
}

int i_rand(int min, int max)
{
      return rand() % (max - min + 1) + min;
}

int main(void)
{
      int tab[N][N];

      for (int i = 0; i < N; i++)
      {
            for (int j = 0; j < N; j++)
            {
                  tab[i][j] = i_rand(-5,5);
                  printf("%5d",tab[i][j]);
            }
            putchar('\n');
      }
      return 0;
}