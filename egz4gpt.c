#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *f_napis(const char *string, int n) //zwracam wskaznik bo jest w mainie *resulkt
{
    char *finalstr = (char *)malloc(strlen(string) * n + 1); // uzywam malloca bo wtedy można edytować string +1 na /0

    if (finalstr == NULL) //jak zle zaalokujesz
    {
        perror("cipeczka");
        exit(1);
    }

    strcpy(finalstr, string); //najpierw kopiuje potem sklejam, bo jakbtm w petli kopiowal to bym nadpisywal

    for (int i = 1; i < n; i++)
    {
        strcat(finalstr, ";");
        strcat(finalstr, string);
    }

    return finalstr;
}

int main(void)
{
    char *result = f_napis("pies", 5);
    printf("%s", result);

    free(result); 

    return 0;
}
