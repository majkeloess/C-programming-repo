#include <stdio.h>

#define z 1.2E2f

int main(void)
{
    ////int x = 1, y;
    
    //x *= 3+2;  (x=10) 

    //x *= y = z= 4; //(x=8,y=4,z=4)
    //x == ( y = z );
    //z = x ++ - 1;
    //x = y == z; (x=0, y=dowolne, z=dowolne) 

    //x == -y ==z; (x=2, y=dowolne, z=dowolne)

    //x *= y + 1;
    //x = x * (y+1);

    //printf("%f\n", z);

    /*int x = 1;
    int y = x - (x % 3) * 3;
    int z;*/

    //int iNum1 = 6, iNum2 = 4;
    //int fNumber = iNum1 / iNum2; (fNumber=1)
    
    //float fNumber = (float)iNum1 / (float)iNum2;
    //printf("%f", fNumber);

    //printf("x= %d, y= %d, z= %d",x,y,z);

    //int x = -3+4%5-6;
    //int x =  !6 || !0 && 2 + 3 >4;
    //printf("%d",x);
    
    /*int w, x = 1, y = 2;
    w = x++ < y ? x==y ? x++ : y++ : ++x;
    printf("w= %d, x= %d, y= %d",w,x,y);*/
    /*int a = 1, b = 2, c = 3;

    /*if (b > a && b < c)
        if (b) 
        c=a+b+1;
        else c+=a+b;
    else a=b;*/
    /*if (a++ -b)
    { 
        c=a+b; 
        b+=a+c; 
    }
    else if ( !(a-2) ) 
    { 
        b+=a; 
        c=a+b; 
    }
    else c=a+2;
    
    printf("a= %d, b= %d, c= %d",a,b,c);*/
    //int i = 2;
    //int k = i << 5;
    //int k = i+3 >> 1;
    //printf("%d",k);
    //int n, p, q;
    //n = 5; p = 2;
    //q = n++ > p || p++ !=3; /* wypisz n, p, q */
    //n = 5; p = 2;
    //q = n++ <p || p++ !=3; /* wypisz n, p, q */
    //n = 5; p = 2;
    //q = ++n == 3 && ++p == 3; /* wypisz n, p, q */
    //n = 5; p = 2;
    //q = ++n == 6 && ++p == 3; /* wypisz n, p, q */
    //printf("n = %d, p = %d, q = %d",n, p, q);

    // int n = 5, p = 9, q;
    // float x; 

    // //q = n<p;
    // //q = n==p;
    // //q = p % n + p > n;
    // //x = p/n;
    // //x = (float) p/n;
    // //x = (p+0.5)/n;
    // //x = (int)(p+0.5)/n;
    // //q = n*(p>n ? n : p);
    // //q = n* (p<n ? n : p);
    // printf("q = %d, x = %f", q, x);
    
    // int a=0,b,c=0,d;
    // a-=b=c+=d=1;
    // a=++b>1 || ++c>1 && ++d>1;
    // printf("%d %d %d %d",a,b,c,d);

    // int i =2, j=3;
    // if( i == 3)
    // if ( j <4)
    // printf("pierwsze");
    // else
    // printf("***");
    sizeof(int)=4;
    int x = 5;
    printf("%d",x<<36);

    return 0;
}