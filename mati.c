#include <stdio.h>

int main()
{
    double eps;
    scanf("%lf",&eps);
    if(eps<=0 || eps>=1){
        printf("eps jest spoza zakresu");
        return 0;
    }
   
   
    double a=2;
    double wyraz=(1.0/a);
    double suma=1;
    while(wyraz>=eps){
        wyraz=(1.0/a);
        suma=suma+wyraz;
        a++;
       
    }
    printf("%lf",suma);
    return 0;
}