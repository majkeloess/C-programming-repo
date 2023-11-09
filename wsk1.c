#include <stdio.h>


int main ( void ) {
int i ; // deklaracja
int *pi , *pj ; // deklaracje
i = 9; // inicjalizacja i
pi = &i ; // inicjalizacja pi
pj = pi ; // inicjalizacja pj
*pj = 123; // przypisanie wartosci
printf("%d %d %d", i, *pi, *pj); //Wynik: 123 123 123
return 0;
}