#include <stdio.h>
#include <math.h>

int main(void)
{

    int liczba;
    int liczba_dziel = 0;
    int i = 2;
    int reszta;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    printf("Dzielniki: ");
    
    while (i <= liczba)
    {
        reszta = liczba % i;

        if (reszta == 0)
        {
            printf("%d ", i);
            liczba_dziel++;
        }

        i++;
    }
    
    if (liczba_dziel == 1)
    {
        printf("\nLiczba %d jest pierwsza", liczba);
    }

    return 0;
}