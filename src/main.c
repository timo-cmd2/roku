#include <stdio.h>
#include <stdlib.h>
#ifdef HAVE_SYS_WAIT_H
#include <sys/wait.h>
#endif

FILE *file;

int main(int argc, char **argv[]) {
  if (!file) {
    printf("File may not exist!");
  }
}
