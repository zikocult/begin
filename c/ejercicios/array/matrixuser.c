#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int filas, columnas;
  printf("Introduzca las filas y columnas a inicializar: ");
  scanf("%i %i", &filas, &columnas);

  int matrix[filas][columnas];
  srand(time(NULL));

  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      matrix[i][j] = 1 + rand() % ((9 + 1) - 1);
      printf("Matrix[%i][%i] = %i  ", i, j, matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
