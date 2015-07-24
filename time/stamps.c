#include <stdio.h>
#include <time.h>

int main()
{
  time_t rawtime;
  int foo = 0;
  while (foo < 10) {
    time(&rawtime);
    printf("%lu\n", rawtime);
    foo++;
    printf("%d\n", foo);
  }
}

