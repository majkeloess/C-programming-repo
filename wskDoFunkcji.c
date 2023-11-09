#include <stdio.h>

int main(void)
{
      int tab[10];
      func(tab, 10);
      return 0;
}

// void func ( int * x ) ;
// void func ( int x [10]) ;
// void func ( int x []) ;

//Rozmiar tablicy musimy przekazać jawnie, np. za pomocą dodatkowej zmiennej:
void func ( int *x , int roz ) ;
void func ( int x [10] , int roz ) ;
void func ( int x [] , int roz ) ;