#include <stdio.h>
#define print(x) printf("%d ", x)
int x;

void Q(int z)
{
    z += x;
    print(z); //????
}
void P(int *y)
{
    int x = *y + 2; // x = 7, *y = 5
    Q(x);
    *y = x - 1; // *y = 6
    print(x); //7
}
main(void)
{
    x = 5;
    P(&x);
    print(x); //6
}