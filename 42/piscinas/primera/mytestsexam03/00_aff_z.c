#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
  int i = 0;
  if (argc == 2) {
    while (argv[1][i] != '\0') {
      if (argv[1][i] == 'z') {
        write(1, &argv[1][i], 1);
        break;
      }
      i++;
    }
    if (argv[1][i] == '\0') {
      write(1, "z", 1);
    }
  } else {
    write(1, "z", 1);
  }
  write(1, "\n", 1);
  return (0);
}
