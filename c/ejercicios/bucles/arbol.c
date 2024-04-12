#include <stdio.h>

int main(int argc, char *argv[]) {
  int i, n, fila;
  printf("Introduzca el número de filas a dibujar: ");
  scanf("%i", &fila);

  for (i = 0; i <= fila; i++) {
    printf("\n");
    for (n = 0; n <= i; n++) {
      printf("*");
    }
  }
  printf("\n");

  return 0;
}
