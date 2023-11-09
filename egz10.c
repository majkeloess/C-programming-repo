#include <stdio.h>
#define RAZ(a, b) (a) < (b) ? (a) : (b)
#define DWA(x) 2 * x
#define TRZY(x) printf("%s = %d\n", #x, x)

int main(void)
{
      int x = 3, y = 4, m = RAZ(x++, y++);
      printf("%d %d %d\n", x, y, m);

      double dwa = 47 / DWA(2);
      printf("%lf\n", dwa);

      TRZY(2*2+6);

      return 0;
}