#include <stdio.h>

int main(void)
{

    double suma = 1;
    double i = 2;
    int n;

    printf("Podaj liczbe wyrazow do zsumowania: ");
    scanf("%d", &n);

    while (i <= n)
    {
        suma += ((double) 1/i);
        i++;
           
    }

    printf("Suma %d elementow = %.10lf",n ,suma);

    return 0;
}