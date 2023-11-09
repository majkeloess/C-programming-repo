#include <unistd.h>
#include <stdio.h>
#include <string.h> // sleep ( unsigned int seconds );
int main(void)
{
      char buff[1024];
      memset(buff,'\0', sizeof(buff));
      fprintf(stdout, " Going to set full buffering\n");
      setvbuf(stdout, buff, _IOFBF, 1024);
      fprintf(stdout, "This is the first line\n");
      fprintf(stdout, " This output will go to buff\n");
      fflush(stdout);
      fprintf(stdout, "will appear when programme\n");
      fprintf(stdout, "will come after sleeping 5s\n");
      sleep(5);
      return 0;
}
