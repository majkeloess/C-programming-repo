#include <stdio.h>

int main(void){

    int h;
        
        scanf("%d",&h);
        
        for(int i=1; i<=h; i++)
        {
            for(int j=1; j<=h+1-i; j++)
                printf("*");
            printf("\n");        
        }


    return 0;
}