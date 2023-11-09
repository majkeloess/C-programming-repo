#include <stdio.h>
#include <stdlib.h>

int main (void)
{
      int **tab = malloc(2*sizeof(*tab));
      *tab = calloc(4, sizeof(**tab));
      *(tab +1) = calloc(4, sizeof(**tab));


      return 0;
}