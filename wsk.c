#include <stdio.h>

int main (void){

    
    int x = 12;
    int *p;
    p = &x;
    printf("%d\n", *p); //Wynik: 12

    float a =1.2 , *c = & a ;
    printf ("%f,␣%f␣\n", a, *c); // Wynik : 1.2 1.2

    return 0;

}