#include <stdio.h>
#include <string.h>
unsigned int strlength_a(const char *s){
    const char *p=s;
    while(*s++);
    return s-p;
}
unsigned int strlength_c(const char *s){
    const char *p=s;
    while(*s) s++;
    return s-p;
}
//#define MAX(a,b)  (a)>(b)?(a):(b) 
//#define DWA(x,y) x*y


int main(void)
{
    //int x=3, y=4, m=MAX(x++,y++);
    //printf("x=%d, y=%d, m=%d\n",x,y,m);
    
    //int x=3, y=4, m=DWA(x-y,x+y);
    //printf("x=%d, y=%d, m=%d\n",x,y,m);
    
    //double m=4/DWA(6+2,2-4);
    //printf("m=%f\n",m);

    char str[]="ala ma 0 kotow \0 i 2 psy";
    printf("strlen_a = %u\n", strlength_a(str));
    printf("strlen_c = %u\n", strlength_c(str));
    printf("strlen  =%lu\n", strlen(str));
    printf("size of     = %lu\n", sizeof(str));
    printf ("%s  \n", str);
    char *z=str;
    while(*z) printf ("%c", *(z++));
    putchar('\n');



    return 0;
}