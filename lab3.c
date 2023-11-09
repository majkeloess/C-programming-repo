#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 4

double suma(double *tab, int len)
{
      double ss = 0.0;
      for (int i = 0; i < len; i++)
            ss += tab[i];
      return ss;
}

double d_rand(double min, double max)
{
      double r = (double)rand() / RAND_MAX;
      return r * (max - min) + min;
}

void wypisz_d(double *poczatek, double *koniec)
{
      while (poczatek < koniec)
            printf("%6.2lf", *poczatek++);
      printf("\n");
      return;
}

int find_min_ind(double *T_F, double *T_L)
{ // poczatek i koniec (T_F - wskaznik na pierwszy element, T_L wskaznik za ostatni element) obszaru tablicy gdzie szukamy minimum
      int min = 0;
      for (int i = 1; i < T_L - T_F; i++)
            if (T_F[min] > T_F[i])
                  min = i;

      return min;
}

int main(void)
{
      srand(time(NULL));

      double abc[N][M];

      for (int i = 0; i < N; i++)
      {
            for (int j = 0; j < M; j++)
            {
                  abc[i][j] = d_rand(-10.0, 10.0);
            }
      }

      for (int i = 0; i < N; i++)
      {
            wypisz_d(*(abc + i), *(abc + i) + M);
      }

      double suma_all = suma(*abc, N * M);
      double suma_1 = suma(*abc, (N * M) / 2);
      double suma_2 = suma(*(abc + 2) + 2, (N * M) / 2);

      printf("\n%lf %lf %lf\n", suma_all, suma_1, suma_2);

      int key = find_min_ind(*abc, *abc + M);
      double value = abc[0][key]; 
      
      for (int i = 1; i < N; i++)
      {
            int d = find_min_ind(*(abc + i), *(abc + i) + M);
            if (value > abc[i][d])
            {
                  value = abc[i][d];
            }      
      }
      printf("value = %.2lf, adress = %p", value, &value);

      return 0;
}