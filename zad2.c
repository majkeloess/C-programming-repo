#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

char *va_cat(const char *first, ...) {
    va_list args;
    const char *current;
    int total_length = strlen(first);

    // Obliczanie całkowitej długości wynikowego łańcucha
    va_start(args, first);
    while ((current = va_arg(args, const char *)) != NULL) {
        total_length += strlen(current);
    }
    va_end(args);

    // Alokuje pamięć dla wynikowego łańcucha
    char *result = (char *)malloc((total_length + 1) * sizeof(char));
    if (result == NULL) {
        printf("Błąd alokacji pamięci.\n");
        return NULL;
    }

    // Sklejanie łańcuchów
    strcpy(result, first);

    va_start(args, first);
    while ((current = va_arg(args, const char *)) != NULL) {
        strcat(result, current);
    }
    va_end(args);

    return result;
}

int main() {
    const char *result1 = va_cat("If you never did You should.", " These things are fun", " and Fun is good.", NULL);
    printf("Rezultat 1: %s\n", result1);

    const char *result2 = va_cat("Sometimes ", "you will never know ", "the value of a moment ", "until it becomes a memory.", NULL);
    printf("Rezultat 2: %s\n", result2);

    // Zapis wyników do pliku
    FILE *file = fopen("plik.txt", "w");
    if (file == NULL) {
        printf("Nie można otworzyć pliku.\n");
        return 1;
    }

    fprintf(file, "Rezultat 1: %s\n", result1);
    fprintf(file, "Rezultat 2: %s\n", result2);

    fclose(file);

    // Zwolnienie pamięci
    free((void *)result1);
    free((void *)result2);

    return 0;
}
