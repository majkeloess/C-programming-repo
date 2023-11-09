#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i_rand(int min, int max)
{
      return rand() % (max - min + 1) + min;
}

int main(void)
{
      srand(time(NULL));

      int rows = i_rand(3, 7);
      int columns = i_rand(3, 7);

      // PIERWSZA CZĘŚĆ A WŁAŚCIWIE TO 3

      int **array_1 = malloc(rows * sizeof(int *));

      for (size_t i = 0; i < rows; i++)
      {
            *(array_1 + i) = malloc(columns * sizeof(int));
      }

      for (size_t i = 0; i < rows; i++)
      {
            for (size_t j = 0; j < columns; j++)
            {
                  array_1[i][j] = i_rand(1, 15);
                  printf("%4d", array_1[i][j]);
            }
            putchar('\n');
      }

      putchar('\n');

      int rows_new = i_rand(3, 7);

      if (rows_new > rows)
      {
            array_1 = realloc(array_1, rows_new * sizeof(int *));

            for (size_t i = rows; i < rows_new; i++)
            {
                  *(array_1 + i) = malloc(columns * sizeof(int));
            }

            for (size_t i = rows; i < rows_new; i++)
            {
                  for (size_t j = 0; j < columns; j++)
                  {
                        array_1[i][j] = i_rand(-15, -1);
                  }
            }

            for (size_t i = 0; i < rows_new; i++)
            {
                  for (size_t j = 0; j < columns; j++)
                  {

                        printf("%4d", array_1[i][j]);
                  }
                  putchar('\n');
            }
      }
      else
      {
            for (size_t i = 0; i < rows_new; i++)
            {
                  for (size_t j = 0; j < columns; j++)
                  {

                        printf("%4d", array_1[i][j]);
                  }
                  putchar('\n');
            }
      }

      for (size_t i = 0; i < rows; i++)
      {
            free(*(array_1 + i));
      }

      free(array_1);

      puts("-----------------------------");
      // KONIEC PIERWSZEJ CZĘŚCI

      int **array_2 = malloc(rows * sizeof(int *));
      *array_2 = malloc(rows * columns * sizeof(int));

      for (size_t i = 1; i < rows; i++)
      {
            *(array_2 + i) = *array_2 + (i * columns);
      }

      for (size_t i = 0; i < rows; i++)
      {
            for (size_t j = 0; j < columns; j++)
            {
                  array_2[i][j] = i_rand(1, 15);
                  printf("%4d", array_2[i][j]);
            }
            putchar('\n');
      }
      putchar('\n');

      if (rows_new > rows)
      {
            array_2 = realloc(array_2, rows_new * sizeof(int *));
            *array_2 = realloc(*array_2, rows_new * columns * sizeof(int));

            for (size_t i = 1; i < rows_new; i++)
            {
                  *(array_2 + i) = *array_2 + (i * columns);
            }

            for (size_t i = rows; i < rows_new; i++)
            {
                  for (size_t j = 0; j < columns; j++)
                  {
                        array_2[i][j] = i_rand(-15, -1);
                  }
            }

            for (size_t i = 0; i < rows_new; i++)
            {
                  for (size_t j = 0; j < columns; j++)
                  {

                        printf("%4d", array_2[i][j]);
                  }
                  putchar('\n');
            }
      }
      else
      {
            for (size_t i = 0; i < rows_new; i++)
            {
                  for (size_t j = 0; j < columns; j++)
                  {

                        printf("%4d", array_2[i][j]);
                  }
                  putchar('\n');
            }
      }

      free(*array_2);
      free(array_2);
      puts("-----------------------------");
      // KONIEC DRUGIEJ CZĘŚCI

      int(*array_3)[columns] = malloc(rows * columns * sizeof(int));

      for (size_t i = 0; i < rows; i++)
      {
            for (size_t j = 0; j < columns; j++)
            {
                  array_3[i][j] = i_rand(1, 15);
                  printf("%4d", array_3[i][j]);
            }
            putchar('\n');
      }
      putchar('\n');

      if (rows_new > rows)
      {
            array_3 = realloc(array_3, rows_new * columns * sizeof(int));

                for (size_t i = rows; i < rows_new; i++)
            {
                  for (size_t j = 0; j < columns; j++)
                  {
                        array_3[i][j] = i_rand(-15, -1);
                  }
            }

            for (size_t i = 0; i < rows_new; i++)
            {
                  for (size_t j = 0; j < columns; j++)
                  {

                        printf("%4d", array_3[i][j]);
                  }
                  putchar('\n');
            }
      }
      else
      {
            for (size_t i = 0; i < rows_new; i++)
            {
                  for (size_t j = 0; j < columns; j++)
                  {

                        printf("%4d", array_3[i][j]);
                  }
                  putchar('\n');
            }
      }
      free(array_3);

      return 0;
}