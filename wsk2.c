#include <stdio.h>

int main (void){

      int a[10], *p;

      p = &a[0];

      *p = 9;

      printf("%d\n", a[0]);

            
            
      return 0;
}