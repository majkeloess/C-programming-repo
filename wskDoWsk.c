#include <stdio.h>

int main(void)
{

      float x = 10.01;
      float *p = &x; // *p to wartość x, p to adres x
      float **q = &p;

      
      
      
      printf("&q=%p, &p=%p, &x=␣%p\n", &q, &p, &x); // trzy inne adresy
      printf("&p=%p, q=%p\n", &p, q); // adres p i adres p?
      printf("&x=%p, p=%p, *q=%p\n", &x, p, *q); //adres x adres x adres x
      printf("x=%f, *p=%f, **q=%f\n", x, *p, **q); //wartosc wartosc x wartosc x

      return 0;
}