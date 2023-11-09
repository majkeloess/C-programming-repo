#include <stdio.h>
#include <stdlib.h>

int main(void)
{
      double tab[5] = {81., 19., 56., 41., 15.};

      FILE *fp = fopen("tab5.bin", "wb");

      if (fp)
      {
            fwrite(tab, sizeof(double), 5, fp);
            fclose(fp);
      }

      FILE *file = fopen("tab5.bin", "rb");

      if (!file)
            exit(-1);

      fseek(file, 3L * sizeof(double), SEEK_SET);
      double x;
      fread(&x, sizeof(double), 1, file);
      printf("x =%.1lf\n", x);

      fseek(file, -1L * sizeof(double), SEEK_CUR);
      fread(&x, sizeof(double), 1, file);
      printf("x =%.1lf\n", x);

      fseek(file, 1L * sizeof(double), SEEK_CUR);
      fread(&x, sizeof(double), 1, file);
      printf("x =%.1lf\n", x);

      fseek(file, -3L * sizeof(double), SEEK_END);
      fread(&x, sizeof(double), 1, file);
      printf("x =%.1lf\n", x);

      long file_pos = ftell(file);
      printf("%d", file_pos);
      fclose(file);

      return 0;
}