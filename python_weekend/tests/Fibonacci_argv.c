#include <stdio.h>
#include <stdlib.h>

int fibo_rec(int repes) {
  if (repes < 0)
    return (-1);
  if (repes == 0 || repes == 1)
    return (repes);
  else
    return (fibo_rec(repes - 1) + fibo_rec(repes - 2));
}

void fibo_sec(int repes) {
  long a = 0, b = 1, auxiliar;
  int i = 0;

  while (i < repes) {
    printf("%i - %li\n", i, a);
    auxiliar = b;
    b = a + b;
    a = auxiliar;
    i++;
  }
  printf("\n");
}

int main(int argc, char **argv) {
  if (argc == 2 && atoi(argv[1]) > 0) {
    printf("En este caso lo haré de forma secuencial\n\n");
    fibo_sec(atoi(argv[1]));
  } else if (argc < 2) {
    printf("Sin parámetros introducidos\n");
  } else if (atoi(argv[1]) <= 0) {
    printf("Sin argumento válido de entrada\n");
  } else {
    printf("Se recoge el primer parámetro y se desechan el resto\n");
    printf("Lo haremos de forma recursiva\n\n");
    for (int i = 0; i < atoi(argv[1]); i++) {
      printf("%i - %i\n", i, fibo_rec(i));
    }
  }
  return (0);
}
