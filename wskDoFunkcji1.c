#include <stdio.h>
#define SIZE 10

int main(void)
{
      int tab[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
      int sum = sump(tab, tab + SIZE);

      return 0;
}

int sump(int *start, int *end)
{
      int total = 0;
      while (start < end)
            total += *start++;
      
      return total;
}