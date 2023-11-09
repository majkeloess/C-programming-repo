#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6

double d_rand(double min, double max)
{
      double r = (double)rand() / RAND_MAX;
      return r * (max - min) + min;
}

void wypisz_d(double *poczatek, double *koniec)
{
      while (poczatek < koniec)
            printf("%8.2lf ", *poczatek++);
      printf("\n");
      return;
}

void wypelnij(double arr[][N], int row)
{
      *arr[0] = d_rand(0, 10);

      for (int i = 0; i < row; i++)
      {
            for (int j = 0; j < N; j++)
            {
                  
            }
      }
}

int main(void)
{
      srand(time(NULL));

      double a1[8][N], a2[10][N];

      wypelnij(a1, 8);
      wypelnij(a2, 10);

      for (int i = 0; i < 8; i++)
      {
            for (int j = 0; j < N; j++)
            {
                  printf("%5d", a1[i][j]);
            }
            putchar('\n');
      }

     

      return 0;
}