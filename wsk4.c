#include <stdio.h>

int main (void){

      int tab[10] = {20 ,10 ,5 ,39 ,4 ,16 ,19 ,26 ,31 ,20};
      int total = 0;
      int *start = tab;
      int *end = tab+10;

      printf("%d", *start); //20

      while ( start < end )
            total += *start++; // start wskazuje na kolejne elementy tablicy

}