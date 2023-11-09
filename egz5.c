#include <stdio.h>
#include <string.h>

char *f_napis(const char *string, int n)
{
      char finalstr[100];

      for(int i = 0; i < n-1; i++)
      {
            strcpy(finalstr, string);
            strcat(finalstr, ';');
      }
      strcpy(finalstr, string);

      return finalstr;
}

int main (void)
{
      char *result = f_napis("kot", 3);
      printf("%s", result);

      return 0;
}