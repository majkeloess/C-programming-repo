#include <stdio.h>
#include <stdlib.h>

int main(void)
{
      char *fname = "myfile.dat";
      int *tab = malloc(10*sizeof(int));

      FILE *pFile = fopen(fname, "w");

      if (pFile)
      {
            for (int *pt = tab; pt < tab + 10; pt++)
                  fscanf(pFile, "%d", pt);
            
            fclose(pFile);
      }

      free(tab);
      tab = NULL;

      return 0;
}
