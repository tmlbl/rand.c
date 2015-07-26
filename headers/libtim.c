#include "libtim.h"
#include <stdio.h>
#include <string.h>

char* greet(char* name)
{
  char* msg = "Hello, %s\n";
  long msg_len = strlen(msg) + strlen(name);
  char buf[msg_len];
  snprintf(buf, msg_len - 1, msg, name);
  return buf;
}

