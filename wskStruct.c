#include <stdio.h>
#define SIZE 10
struct person
{
      char first[SIZE + 1];
      char last[SIZE + 1];
};
int main(void)
{
      struct person p1 = {"Fred", "Smith"};
      struct person *ptp1 = &p1;

      printf("%s,%s\n", ptp1->first, (*ptp1).last);

      return 0;
}