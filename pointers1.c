#include <stdio.h>

int main()
{
    int a;
    int b;

    int* ptr;

    ptr=&a;
    *ptr=1;
    printf("a=%d, b=%d, ptr=%d\n",a,b,ptr);

    ptr=&b;
    *ptr=2;
    printf("a=%d, b=%d, ptr=%d\n",a,b,ptr);

    return 0;
}