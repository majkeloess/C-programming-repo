#include <stdio.h>

int main(void)
{

      int a[10], *p, *q, i;
      p = &a[5]; // p wskazuje na a[5]
      q = &a[1]; // q wskazuje na a[1]
      i = p - q; // wartosc i to 4

      printf("%d\n", i);

      return 0;
}