#include <stdio.h>
#include <stdlib.h>

int main(void)
{
      char *fname = "myfile.dat";
      int *tab = malloc(10*sizeof(int));

      FILE *pFile = fopen(fname, "rb");

      if (pFile)
      {
            fread(tab, sizeof(*tab), sizeof(tab) / sizeof(*tab), pFile);
            fclose(pFile);
      }

      free(tab);
      tab = NULL;

      return 0;
}