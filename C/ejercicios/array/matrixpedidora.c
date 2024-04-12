// Hacer una matriz de tipo entera preguntando al usuario el numero de filas y
// el número de columnas, rellenar la matriz y luego mostrarla en pantalla

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int fila, columna;
  printf("Introduzca el número de filas y columnas de la matriz a iniciar\n");
  scanf("%i %i", &fila, &columna);

  int matrix[fila][columna];
  srand(time(NULL));

  for (int i = 0; i < fila; i++) {
    for (int j = 0; j < columna; j++) {
      matrix[i][j] = 1 + rand() % ((100 + 1) - 1);
      printf("Matrix[%i] = %i  ", i, matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
