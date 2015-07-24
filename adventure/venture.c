#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <readline/readline.h>
#include <readline/history.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"

void adv_print(char* str)
{
  printf("%s%s%s\n", KGRN, str, RESET);
  printf("%s%s%s\n", KYEL, str, RESET);
  printf("%s%s%s\n", KBLU, str, RESET);
  printf("%s%s%s\n", KCYN, str, RESET);
  printf("%s%s%s\n", KRED, str, RESET);
  printf("%s%s%s\n", KMAG, str, RESET);
}


int main()
{
  char* res;
  while (1) {
    res = readline("okay> ");

    if (strcmp(res, "exit") == 0)
      exit(0);

    adv_print(res);
  }
  return 0;
}
