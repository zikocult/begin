/*Dado un vector de 10 elementos = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, escribir un
 * programa en C (haciendo uso de punteros) que muestre las direcciones de
 * memoria de cada elemento del vector */

#include <stdio.h>

int main(void) {

  int vector[] = {10, 21, 82, 33, 14, 5, 65, 70, 81, 29};
  int *pVector = vector;
  int i = 0;

  // NO FUNCIONA AMB EL WHILE!!!!
  while (*pVector) {
    printf("Posicion memoria [%d] = %p con valor = %d\n", i, pVector, *pVector);
    pVector++;
    i++;
  }

  pVector = vector;
  printf("\n");

  for (int i = 0; i < 10; i++) {
    printf("Posicion memoria [%d] = %p con valor = %d\n", i, pVector, *pVector);
    pVector++;
  }

  return 0;
}
