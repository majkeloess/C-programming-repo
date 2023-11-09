#include <stdio.h>
#include <string.h>
int main(void)
{
      char str[] = "- This, a sample string.";
      printf ("Splitting string \"% s\" into tokens:\n\n", str ) ;
      char *pch = strtok ( str ," ,. -") ;

      while ( pch ) 
      {
            printf("%s\n", pch);
            pch = strtok(NULL, " ,. -");
      }
      
      return 0;
}