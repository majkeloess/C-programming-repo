#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

      int *ptrArray[5];

      for (int i = 0; i < 5; i++)
      {
            ptrArray[i] = (int *)malloc(sizeof(int)); // (int*) to rzutowanie na typ bo malloc zwraca void
      }

      *ptrArray[0] = 10;
      *ptrArray[1] = 20;

      for (int i = 0; i < 5; i++)
      {
            printf("%10d", *ptrArray[i]);
            free(ptrArray[i]);
      }

      float *x[10], v1, v2;
      x[2] = &v1;
      x[3] = &v2;
      x[4] = x[2];
      *x[2] = 23.3F;
      *x[3] = *(*(x + 2)) + 7.12F;

      return 0;
}