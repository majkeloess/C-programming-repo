#include <stdio.h>
#include <stdlib.h>

int main(void)
{
      char *fname = "myfile.txt";
      int *tab = calloc(10, sizeof(int));

      FILE *pFile = fopen(fname, "w");
      
    
      
      free(tab);
      tab = NULL;
      
      return 0;
}
