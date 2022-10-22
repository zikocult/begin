#include <stdio.h>

int main(int argc, char *argv[]) {
  int num, i, cociente;
  printf("Introduzca el número al que buscar los múltiplos\n");
  scanf("%i", &num);

  printf("Los multiplos de %i son: ", num);

  for (i = 1; i < num; i++) {
    cociente = num % i;

    if (cociente == 0) {
      printf("%i, ", i);
    }
  }

  printf("%i\n", num);

  return 0;
}
