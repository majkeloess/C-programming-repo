#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double function(int n, double *suma, long double *iloczyn, double *srednia)
{
    double liczba;
    *suma = 0;
    *iloczyn = 1;

    for(int i=1; i<=n;i++)
    {
        liczba = 0.5 + (double) rand() /RAND_MAX;

        *suma = *suma + liczba;
        *iloczyn = *iloczyn * liczba;

    }
    *srednia = *suma / n;   
}

int main(void)
{
    srand(time(NULL));
    
    int n;
    double suma, srednia; 
    long double iloczyn;
    
    printf("Podaj n: ");
    scanf("%lf", &n);

    function(n, &suma, &iloczyn, &srednia);

    printf("Suma: %lf, Iloczyn: %Ld, Srednia: %lf",suma, iloczyn, srednia);

    return 0;
}