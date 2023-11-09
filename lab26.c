#include <stdio.h>

int main(){

    char h;


    do
    {
        printf("Podaj wysokosc : ");
        scanf("%c",&h);
        h=h-'A'+1;
    } while (h<=0);    
    

    for (int i=h; i>=0; i--)
    {
        for(int j=0; j<=h+1-i; j++)
        {
            printf(" ");
        }

        for(int k=1; k<=2*i-1; k++)
        {
            printf("%c",'A'+k-1);
        }
        printf("\n");
    }
    
    return 0;
}