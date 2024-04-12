/*
 * Hacer un array de 10 números desordenados,
 * ordenarlos mediante el método de la burbuja
 * después pedir un dato y usar la buqueda binaria
 * devolver si existe ese dato o no
 */

#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int a[10] = {62, 42, 43, 158, 30, 373, 54, 67, 84, 23};
  int i, j, aux;

  // Primera vuelta para ver como está
  for (i = 0; i < 10; i++) {
    printf("%i, ", a[i]);
  }
  printf("\n");

  // Método de la burbuja
  for (i = 0; i < 10; i++) {
    for (j = 0; j < (10 - 1); j++) {
      if (a[j] > a[j + 1]) {
        aux = a[j];
        a[j] = a[j + 1];
        a[j + 1] = aux;
      }
    }
  }

  for (i = 0; i < 10; i++) {
    printf("%i, ", a[i]);
  }
  printf("\n");

  // Búsqueda binaria, inicializamos dos variables a la posicion mayor y la
  // menor, en este caso inf y sup
  // SOBRETODO, para que sirva debe estar ordenado previamente

  int inf = 0, sup = 10, mitad, dato;
  bool bandera = 0;

  printf("Introduzca el dato a buscar: ");
  scanf("%i", &dato);

  while (inf <= sup) {
    mitad = (inf + sup) / 2; // Això es la clau, sempre talla per la metitat
    // Aquí busca si es major o menor i va cambiant segons necessita
    if (a[mitad] == dato) {
      bandera = 1;
      break;
    } else if (a[mitad] > dato) {
      sup = mitad - 1;
    } else if (a[mitad] < dato) {
      inf = mitad + 1;
    }
  }

  if (bandera == 1) {
    printf("Se ha encontrado %i dentro del array en la posición %i\n", dato, mitad + 1);
  } else if (bandera == 0) {
    printf("%i no está contenido dentro del array definido\n", dato);
  }

  return 0;
}
