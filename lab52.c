#include <stdio.h>

int Fib(int n)
{
    int a = 0, b = 1, c;

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int main(void)
{
    int n;

    printf("Podaj wyraz ciagu fibonacciego : ");
    scanf("%d", &n);

    printf("\nWyraz nr %d ciagu fibonacciego to: %d", n, Fib(n));

    return 0;
}