#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
  int i;
  int lenght;

  i = 0;
  lenght = argc - 1;
  if (argc > 1) {
    while (argv[lenght][i] != '\0') {
      write(1, &argv[lenght][i], 1);
      i++;
    }
  } 
  write(1, "\n", 1);
  return 0;
}
