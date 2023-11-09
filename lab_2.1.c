#include <stdio.h>

void swap(int *a, int *b)
{
      int temp = *a;
      *a = *b;
      *b = temp;
      return;
}


void show_tab(int *start, int *end)
{
      int counter = 0;
      while (start < end)
      {
            printf("tab[%d]= %d\n", counter++, *start++);
      }
}

int find_min_wsk(int *tab, int size)
{
      int *min_wsk = tab;

      for (int i = 1; i < size; i++)
      {
            if (*min_wsk > *(tab + i))
            {
                  min_wsk = tab + i;
            }
      }

      return min_wsk;
}

int main(void)
{
      int tab_A[] = {3, 5, 33, 1, 7, 9, 55, 1, 11, 22,
                     12, 6, 0, 4, 44, 6, 42, 2, 8, 26,
                     64, 80, 22, 12, 6, 8, 4, 44, 6, 42,
                     2, 16, 5, 33, 1, 7, 9, 55, 1, 11,
                     22, 34, 78, 11, 21, 9, 12, 5, 3, 9};

      int size = sizeof(tab_A) / sizeof(tab_A[0]); // 50 50/5=10, 50/ = 20

      // printf("%p\n", find_min_wsk(tab_A, size));
      show_tab(tab_A, tab_A + size);
      sort(tab_A, tab_A + size);
      show_tab(tab_A, tab_A + size);

      // 0-9 rożnica jest 10
      // show_tab(tab_A, tab_A + 10);
      // printf("min_wsk =%p, min_war=%d, indeks=%d\n", find_min_wsk(tab_A, 10), *find_min_wsk(tab_A, 10), -(tab_A - find_min_wsk(tab_A, 10)));
      // putchar('\n');
      // show_tab(tab_A+10,tab_A+20);
      //  20-29
      // show_tab(tab_A+20,tab_A+30);
      //  30-39
      //  40-49

      return 0;
}