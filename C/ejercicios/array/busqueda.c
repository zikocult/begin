// Hacer una busqueda secuencial de una lista, devolver si el número existe o no
// y devolver en que posicion de la lista está.

#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int a[10] = {2, 4, 6, 8, 0, 1, 3, 5, 7, 9};
  int i = 0, dato;
  bool busqueda = 0;

  printf("Escriba un número: ");
  scanf("%i", &dato);

  // Está bé, pero es millor amb un while per no tenir que fer el break
  //
  // for (i = 0; i < 10; i++) {
  //   if (a[i] == dato) {
  //     printf("El dato existe y está en la posición %i\n", i);
  //     busqueda=1;
  //     break;
  //   }
  // }

  while ((busqueda == 0) && (i < 10)) {
    if (a[i] == dato) {
      printf("El dato existe y está en la posición %i\n", i + 1);
      busqueda = 1;
    }
    i++;
  }

  if (busqueda == 0) {
    printf("El número introducido no está en la lista\n");
  }

  return 0;
}
