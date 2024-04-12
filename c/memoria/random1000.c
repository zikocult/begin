/*
Reservar un espacio de memoria con malloc para un array de tipo double para 100
números y comprobar si el puntero es válido (si el puntero devuelve NULL,
significa que no hay suficente memoria)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TOPE 100

int main(void) {
  double *p_array;
  p_array = (double *)calloc(TOPE, sizeof(double));
  if (!p_array) {
    printf("Error en la asignación de memoria :( \n");
    return (-1);
  } else {
    srand(time(NULL));
    for (size_t i = 0; i < TOPE; ++i) {
      p_array[i] = 1 + rand() % ((TOPE + 1) - 1);
      printf("%.2lf\n", p_array[i]);
    }
  }
  return (0);
}
