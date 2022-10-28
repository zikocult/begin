// Per sumar matrius tenen que tenir el mateix número de columnes una que de
// files l'altre, l'exemple primer va amb mateixa quantintat de columnes i files

#include <stdio.h>

int main(int argc, char *argv[]) {
  // Poso les dos maneres de iniciar-les a mà

  int matrix1[2][2] = {{1, 2}, {3, 4}}, matrix2[2][2] = {5, 6, 7, 8},
      matrixsum[2][2];

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      matrixsum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("MatrixSum[%i][%i] = %i ", i, j, matrixsum[i][j]);
    }
    printf("\n");
  }
  return 0;
}
