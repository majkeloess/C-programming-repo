#include <stdio.h>

int main(void){

    double suma=1; 
    double i = 2;
    double eps = 1e-8;
    
    double wyraz=(double)1/(i*i);

    while (wyraz>=eps){
        
        suma+=wyraz;
        i++;
        wyraz=(double)1/(i*i);
        // printf("%lf",suma); 

    }
    
    printf("Suma %f elementow: %.4lf",i-1,suma);
    
    return 0;
}