// Realizar un vector dinámico de 10 elementos aleatorios comprendidos entre 0 y
// 2 y elminar todos los números repetidos reajustando el vector.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(int *vector, int N);

int main(void) {

  int i, j, k, l;
  int N = 10;
  int *vector;

  // Asignar un tamaño al vector
  vector = (int *)malloc(sizeof(int) * N);
  if (vector == NULL) {
    printf("No se ha podido reservar el espacio de memoria\n");
  } else {
    aleatorio(vector, N);
    for (i = 0; i < N; i++) {
      j = i + 1; // Per a que no compari els dos primers
      while (j < N) {
        if (*(vector + 1) == *(vector + j)) {
          for (k = 0; k + 1 < N - 1; k++) { // K +1 because ultim element buid
            *(vector + k) = *(vector + k + 1);
          }
          N--;
        } else {
          j++;
        }
      }
    }
    // redimensiona el vector conservando sus valores
    vector = (int *)realloc(vector,sizeof(int) * N);
    if (vector == NULL) {
      printf("No se ha podido reservar el espacio de memoria\n");
    } else {
      for (l = 0; i < N; l++) {
        printf("%i ", *(vector + i));
      }
      printf("\n");
    }
  }
  free(vector);
  return 0;
}

void aleatorio(int *vector, int N) {
  int i;
  srand(time(NULL));

  for (i = 0; i < N; i++) {
    *(vector + i) = rand() % 3;
    printf("%i, ", *(vector + i));
  }
  printf("\n");
}
