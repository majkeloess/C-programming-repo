#include <stdio.h>
#define N 5

void swap(int *p_1, int *p_2)
{
      int temp = *p_1;
      *p_1 = *p_2;
      *p_2 = temp;
      return;
}

int main(void)
{
      int tab[N][N];

      for (int i = 0; i < N; i++)
      {
            for (int j = 0; j < N; j++)
            {
                  tab[i][j] = j;
                  printf("TAB[%d][%d]=%d, ", i, j, tab[i][j]);
            }
            putchar('\n');
      }
      putchar('\n');

      for (int i = 0; i < N; i++)
      {
            for (int j = i+1; j < N; j++)
            {
                  swap(*(tab+i)+j, *(tab+j)+i);
            }
      }

      for (int i = 0; i < N; i++)
      {
            for (int j = 0; j < N; j++)
            {
                  printf("TAB[%d][%d]=%d, ", i, j, tab[i][j]);
            }
            putchar('\n');
      }



      return 0;
}