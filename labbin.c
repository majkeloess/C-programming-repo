#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 8
void U2(int p){
    
    char tab[N+1];

    int num = p;

    if (p < - 128 || p > 127 )
    {
        printf("Liczba %d jest poza zakresem [-128, 127]\n", p);
        return;
    }

    if (p < 0)
    {
        num = pow(2, 8) + p;
    }

    for(int i=7;i>=0; i--)
    {
        tab[i] = (num % 2) + '0';
        num/=2;
    }

    tab[8] = '\0';





    printf("%4d = %s\n", p, tab);
}








int main(void){
for(int i=-130; i<131; i++)
if(i<-125 || i>125 || i%50==0)
U2(i);
return 0;
}