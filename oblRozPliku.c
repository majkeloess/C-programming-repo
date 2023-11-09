#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int main(int argc, char *argv[])
{
      FILE *pFile = fopen(argv[1], "rb");
      
      if (!pFile)
            perror("Error opening file");
      else
      {
            fseek(pFile, 0, SEEK_END);
            int s = ftell(pFile);
            fclose(pFile);
            printf(" Size of %s: %dbytes .\n", argv[1], s);
      }

      return 0;
}