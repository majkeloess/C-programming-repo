#include <stdio.h>
int main(void)
{
      int c, *b, **a;
      c = 4;
      b = &c; // c to 4, b to adres zmiennej c, a to adres zmiennej b 
      a = &b;

      printf("%d ", f(c, b, a));

      return 0;
}

int f(int x, int *py, int **ppz)
{
      int y, z;
      
      **ppz += 1;
      z = **ppz; //5
      *py += 2; 
      y = *py; //7
      x += 3; //7
      
      return x + y + z;
}