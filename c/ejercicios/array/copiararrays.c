#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define grande 15

void copiamatriz(int a[], int b[], int tamanio);

int main(int argc, char *argv[]) {
  int array1[5], array2[5];
  srand(time(NULL));

  for (int i = 0; i < 5; i++) {
    array1[i] = 1 + rand() % ((10 + 1) - 1);
    printf("Array1[%i] = %i\n", i, array1[i]);
  }

  printf("\n");
  copiamatriz(array1, array2, 5);

  // Una excepció a la copia mostrada aquí, la copia d'arrays de string

  char str1[grande], str2[grande];
  printf("Introduzca su nombre: ");
  fgets(str1, grande, stdin);
  // El truc aquí, es que hem d'usar el strcpy de la llibreria string.h
  strcpy(str2, str1);
  printf("Y aquí el resultado de strcpy(destino, origen): %s\n", str2);

  return 0;
}

void copiamatriz(int a[], int b[], int tamanio) {
  for (int i = 0; i < tamanio; i++) {
    b[i] = a[i];
    printf("Array2[%i] = %i\n", i, b[i]);
  }
}
