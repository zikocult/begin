// Poner todos los múltiplos de 5 de 1 hasta n
#include <stdio.h>

int main(int argc, char *argv[]) {
  int n, i;
  printf("Introduzca el número del que sacar los múltiplos de 5 hasta llegar a "
         "él\n");
  scanf("%i", &n);

  for (i = 1; i <= n; i++) {
    if (i % 5 == 0) {
      printf("Número: %i\n", i);
    }
  }

  return 0;
}
