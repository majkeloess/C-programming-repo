#include <stdio.h>
#define N_ROWS 15
#define N_COLS 18
#define ROW_TO_PROCESS 14

void wypisz_i(int *poczatek, int *koniec)
{
      while (poczatek < koniec)
            printf("%5d", *poczatek++);
      printf("\n");
      return;
}

int main(void)
{
      int tab[N_ROWS][N_COLS]; 
      int changing = ROW_TO_PROCESS;    // 12

      for(int i = 0; i < N_ROWS; i++)
      {
            for(int j = 0; j <N_COLS;j++)
            {
                  tab[i][j] = 0;
            }
      }

      int *wsk_do_zmn = &tab[changing][0];
      // fp = &(*(tab[i] + 0));
      wsk_do_zmn = tab[changing];

      for (; wsk_do_zmn < tab[changing] + N_COLS; wsk_do_zmn++)
            *wsk_do_zmn = 7;

      
      for(int i = 0; i < N_ROWS; i++)
      {
            for(int j = 0; j <N_COLS;j++)
            {
                  printf("%5d",tab[i][j]);
            }
            putchar('\n');
      }

      
}