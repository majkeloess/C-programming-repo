#include <stdio.h>
#include <stdlib.h>
struct point
{
    double x, y, z;
    char label[4];
};

void save_to_binary(char *name, void *tab, size_t element_size, size_t num_elements)
{
    FILE *file = fopen(name, "wb");

    if (file)
    {
        fwrite(tab, element_size, num_elements, file);
        fclose(file);
    }
}

int main()
{
    int int_array[] = {1, 2, 3, 4, 5};
    struct point tab2[13] = {};

    double *TAB = realloc(NULL, 17*sizeof(*TAB));
    
    save_to_binary("data1.bin", int_array, sizeof(int), sizeof(int_array) / sizeof(int));
    save_to_binary("data2.bin", tab2, sizeof(struct point), sizeof(tab2) / sizeof(struct point));
    save_to_binary("data3.bin", TAB, sizeof(*TAB), sizeof(TAB)/sizeof(*TAB));
    
     return 0;
}
