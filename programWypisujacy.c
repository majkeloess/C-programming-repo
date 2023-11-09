#include <stdio.h>
int main(void)
{
      int x;
      
      FILE *fp = fopen(__FILE__, "r");
      if (fp)
      {
            int c;
            while ((c = fgetc(fp)) != EOF)
                  fputc(c, stdout);
            fclose(fp);
      }
      return 0;
}