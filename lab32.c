#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 6


int i_rand(int min, int max)
{
      return rand() % (max - min + 1) + min;
}

int main(void)
{
      

      int tab[N][M];
      int (*wsk)[6] = tab+2;
      
      
      for (int i = 0; i < N; i++)
      {
            for (int j = 0; j < M; j++)
            {
                  tab[i][j] = i_rand(1, 99);
                  printf("%5d", tab[i][j]);
            }
            putchar('\n');
      }
      putchar('\n');
      
      //printf("%p %p",wsk-2, &tab[0]); <-- to są te same wartości
      for(int i = 0; i <=(M/2);i++)
      {
            *wsk[-2] = 0;
            wsk++;
      }

      for (int i = 0; i < N; i++)
      {
            for (int j = 0; j < M; j++)
            {
                  //tab[i][j] = i_rand(1, 99);
                  printf("%5d", tab[i][j]);
            }
            putchar('\n');
      }
      
      
      return 0;
}