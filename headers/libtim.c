#include "libtim.h"
#include <stdio.h>

char* greet(char* name)
{
  char* msg;
  sprintf(msg, "Hello, %s\n", name);
  return msg;
}

