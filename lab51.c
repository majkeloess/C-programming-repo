#include <stdio.h>

int silnia(int n)
{

    int s = 1;

    for (int i = 2; i <= n; i++)
    {
        s = s * i;
    }

    for (int j = 0; j <= n - 2; j++)
    {
        printf("> Obliczam silnia(%d) = %d*silnia(%d)\n", n - j, n - j, n - 1 - j);
    }

    printf("> Zwracam silnia(1)\n");

    return s;
}

int main(void)
{

    int k, s = 0;

    while (1)
    {

        printf("Podaj liczbe (liczba ujemna konczy program): ");

        scanf("%d", &k);

        if (k < 0)
            break;

        s = silnia(k);

        printf("silnia(%d) = %d\n\n", k, s);
    }
    return 0;
}