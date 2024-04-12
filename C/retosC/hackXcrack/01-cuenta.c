#include <stdio.h>

int main(int argc, char *argv[]) {
  int i;

  i = 0;
  if (argc > 1)
    while (argv[1][i] != '\0')
      i++;
  printf("La longitud de la cadena es: %d\n", i);
  return 0;
}
