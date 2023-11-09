#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double d_rand(double min, double max)
{
    double r = (double)rand() / RAND_MAX;
    return r * (max - min) + min;
}

int main(void)
{
    double A[10];
    int indeks_min = 0;
    int indeks_max = 0;

    for (int i = 0; i <= 9; i++)
    {
        A[i] = d_rand(-100.0, 100.0);

        int min = 0; 
        int licznik = 1; 
        min= i;
        licznik = i+1;

            if (A[min] < A[licznik])
        {
            min = licznik;
            indeks_min++;
        }
        // if (A[i]>A[i+1])
        // indeks_max++;

        printf("A[%d] = %.2lf\n", i, A[i]);
    }
    printf("Indeks najmniejszego elementu: %d, najwiekszego:", indeks_min);

    return 0;
}