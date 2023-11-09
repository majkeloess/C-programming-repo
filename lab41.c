#include <stdio.h>
#include <time.h>
#include <stdlib.h>

double d_rand(double min, double max)
{
    double r = (double)rand() / RAND_MAX;
    return r * (max - min) + min;
}

void wypisz_d(float *poczatek, float *koniec)
{
    while (poczatek < koniec)
        printf("%10.2f ", *poczatek++);
    printf("\n");
    return;
}

void wypelnij(float (*A)[6], float n)
{
    float liczba = d_rand(1.0, 10.0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            A[i][j] = liczba;
            liczba += 0.4;
        }
    }
}

int main(void)
{
    srand(time(NULL));

    float A1[8][6];
    float A2[10][6];

    wypelnij(A1, 8);
    wypelnij(A2, 10);

    // wypisz_d(*(A1+0)+0,*(A1+7)+5);

    putchar('\n');

    // wypisz_d(*(A2+0)+0,*(A2+9)+5);

    putchar('\n');

    for (int i = 0; i < 8; i++)
    {
        wypisz_d(*(A1 + i) + 0, *(A1 + i) + 5);
    }

    putchar('\n');

    for (int i = 0; i < 10; i++)
    {
        wypisz_d(*(A2 + i) + 0, *(A2 + i) + 5);
    }

    return 0;
}