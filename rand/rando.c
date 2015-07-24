#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  FILE *f = fopen("randoms.csv", "w");
  fprintf(f, "index,value");
  for (i = 0; i <= 2000000; i++) {
    uint32_t r = arc4random();
    fprintf(f, "%d,%d\n", i, r);
  }

  fclose(f);
}

