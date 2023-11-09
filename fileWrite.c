#include <stdio.h>
#include <stdlib.h>

void save_to_binar(char *name, void *tab, size_t element_size, size_t num_elements)
{
      FILE *file = fopen(name, "wb");

      if(file)
      {
            fwrite(tab, element_size, num_elements, file);
            fclose(file);
      }
}

int main(void)
{
      char *fname = "myfile.txt";
      int *tab = calloc(10, sizeof(int));

      FILE *pFile = fopen(fname, "wb");

      if (pFile)
      {
            fwrite(tab, sizeof(*tab), sizeof(tab)/sizeof(*tab), pFile);
            fclose(pFile);
      }
      save_to_binar("testing.dat", tab, sizeof(*tab), sizeof(tab)/sizeof(*tab));

      free(tab);
      tab = NULL;

      return 0;
}