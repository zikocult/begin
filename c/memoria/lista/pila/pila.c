#include "pila.h"

int main(void) {
  Pila miPila = crearPila();
  Push(&miPila, 10);
  printf("El valor del tope es: %d\n", miPila.tope);
  printf("El valor dentro de la lista es: %d\n", miPila.lista[miPila.tope - 1]);
  printf("El valor dentro de la lista es: %d \n", top(miPila));

  printf("\n");
  Push(&miPila, 422);
  Push(&miPila, 219);
  Push(&miPila, 14);
  printf("El valor del tope es: %d\n", miPila.tope);
  printf("El valor dentro de la lista es: %d \n", top(miPila));

  printf("\n");
  int valor = pop(&miPila);
  printf("El valor eliminado es: %d\n", valor);
  printf("El valor del tope es: %d\n", miPila.tope);
  printf("El valor dentro de la lista es: %d \n", top(miPila));
  
  printf("\n");
  valor = pop(&miPila);
  printf("El valor eliminado es: %d\n", valor);
  valor = pop(&miPila);
  printf("El valor eliminado es: %d\n", valor);
  valor = pop(&miPila);
  printf("El valor eliminado es: %d\n", valor);
  valor = pop(&miPila);
  printf("El valor eliminado es: %d\n", valor);
  valor = pop(&miPila);
  printf("El valor eliminado es: %d\n", valor);
  return (0);
}
