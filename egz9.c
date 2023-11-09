#include <stdio.h>
#define N 4
#define M 3



int main(void)
{
      int T[N][M] = {1,3,5,8,0,2,7,12,9,4,6,10};
      printf("%p, &T[0][0]=%p\n", T[1]+2, &T[0][0]);
      
      //printf(" %p %p %p %p %p %d %p ", T[0]+1, T+2, *(T+1), *(T[0]+2), *T, **T+1, *(T+2)+2); // 
}