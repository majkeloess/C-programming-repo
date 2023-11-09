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

int cmp_sum(const void *a, const void *b)
{
      //int as =;
      //int bs =;

      //return as - bs; 
}

void proc_1(size_t row, size_t columns, int tab[][columns])
{
      for(size_t i=0; i < row; i++)
      {
      qsort(*(tab+i),columns,sizeof(int), compare);
      }
}

void proc_2(size_t row, size_t columns, int tab[][columns])
{

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

int main(void)
{
      int tab_A[3][6] = {{1, -4, 1, 2, 11, 6}, {12, 2, 32, 2, 5, 1}, {72, 2, -32, 2, 9, 24}};
      int tab_B[4][3] = {{1, -24, 1}, {9, 32, 2}, {5, 64, 1}, {3, 32, 1}};

      puts("tab_A: ");
      print_tab_all(3, 6, tab_A);
      //proc_1(3, 6, tab_A);
      putchar('\n');
      qsort(tab_A, 3*6, sizeof(int),compare);
      print_tab_all(3, 6, tab_A);


      puts("tab_B: ");
      print_tab_all(4, 3, tab_B);
      proc_1(4, 3, tab_B);
      putchar('\n');
      print_tab_all(4, 3, tab_B);

      return 0;
}
