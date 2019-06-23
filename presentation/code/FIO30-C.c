#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void incorrect_password(const char *user){
  int ret;
  static const char msg_format[] =
      "%s cannot be authenticated.\n";
  size_t len = strlen(user) + sizeof(msg_format);
  char *msg = (char *)malloc(len);
  ret = snprintf(msg, len, msg_format, user);
  fprintf(stderr, msg);
  free(msg);
}
