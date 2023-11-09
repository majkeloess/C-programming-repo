#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arg_p = NULL; // Wskaźnik do dynamicznie rosnącej tablicy arg_p
    int *arg_n = NULL; // Wskaźnik do dynamicznie rosnącej tablicy arg_n
    int *table = NULL; // Wskaźnik do dynamicznie kurczącej się tablicy table
    int table_size = 0; // Rozmiar początkowy tablicy table

    // Dodawanie elementów do arg_p i arg_n (rosnące tablice)
    for (int i = 0; i < 10; i++) {
        // Realokacja pamięci dla arg_p
        int *temp_p = (int *)realloc(arg_p, (i + 1) * sizeof(int));
        if (temp_p == NULL) {
            // Obsługa błędu alokacji pamięci
            perror("Nie udało się zaalokować pamięci dla arg_p");
            free(arg_p);
            exit(1);
        }
        arg_p = temp_p;

        // Realokacja pamięci dla arg_n
        int *temp_n = (int *)realloc(arg_n, (i + 1) * sizeof(int));
        if (temp_n == NULL) {
            // Obsługa błędu alokacji pamięci
            perror("Nie udało się zaalokować pamięci dla arg_n");
            free(arg_n);
            exit(1);
        }
        arg_n = temp_n;

        arg_p[i] = i; // Dodawanie elementu do arg_p
        arg_n[i] = -i; // Dodawanie elementu do arg_n
    }

    // Usuwanie elementów z tablicy table (kurcząca się tablica)
    for (int i = 0; i < 5; i++) {
        if (table_size > 0) {
            table_size--;
            // Realokacja pamięci dla table
            int *temp_table = (int *)realloc(table, table_size * sizeof(int));
            if (temp_table == NULL) {
                // Obsługa błędu alokacji pamięci
                perror("Nie udało się zaalokować pamięci dla table");
                free(table);
                exit(1);
            }
            table = temp_table;
        }
    }

    // Zwolnienie pamięci zaalokowanej dla arg_p, arg_n i table
    free(arg_p);
    free(arg_n);
    free(table);

    return 0;
}
