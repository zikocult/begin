#include "pila.h"
#include <stdio.h>

int main(void) {
  // Creamo tres pilas con la funcion crear
  Pila PilaUsuario = crearPila();
  Pila PilaMenor = crearPila();
  Pila PilaAuxiliar = crearPila();

  for (int i = 0; i < 8; i++) {
    int valor;
    printf("Introduzca el valor [%d] de la Pila: ", i + 1);
    scanf("%d", &valor);
    fflush(stdin);
    Push(&PilaUsuario, valor);
  }

  // Determinamos el menor de los datos introducidos por el usuario

  while (isempty(PilaUsuario) == 0) {
    Push(&PilaMenor, pop(&PilaUsuario));
    while (isempty(PilaUsuario) == 0) {
      if (top(PilaUsuario) > top(PilaMenor))
        Push(&PilaAuxiliar, pop(&PilaUsuario));
      else{
        Push(&PilaAuxiliar, pop(&PilaMenor));
        Push(&PilaMenor, pop(&PilaUsuario));
      }
    }
  }
  printf("El menor valor introducido es: %d\n", pop(&PilaMenor));
  return (0);
}
