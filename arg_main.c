#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
      printf(" Nazwa programu :%s\n", argv[0]);

      for (int i = 1; i < argc; i++)
            printf("%s\n", argv[i]);

      for (char **p = &argv[1]; *p; p++)
            printf("%s\n", *p);

      printf("%d, %lf\n", atoi(argv[2]), atof(argv[1]));
      return 0;
}