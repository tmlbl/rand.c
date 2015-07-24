#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define NUM_TICKS 5
#define INTERVAL 150

int main()
{
  clock_t start_time;
  clock_t cur_time;
  
  start_time = clock();

  int ticks = 0;
  while (ticks < NUM_TICKS) {
    sleep(1);
    ticks++;
    cur_time = clock();
    clock_t diff = cur_time - start_time;
    printf("%lu clocks in %d seconds.\n", diff, ticks);
  }
}

