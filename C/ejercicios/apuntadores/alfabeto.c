// Imprimir el alfabeto en mayúsculas con punteros

#include <stdio.h>

int main(int argc, char *argv[]) {
  char caracter, *apuntadorCaracter;
  apuntadorCaracter = &caracter;
  caracter = 'B';

  printf("caracter = decimal: %d, caracter: %c, posición: %p\n", caracter,
         caracter, caracter);
  printf("&caracter = decimal: %d, caracter: %c, posicion: %p\n", &caracter,
         &caracter, &caracter);
  printf("apuntadorCaracter = decimal: %d, caracter: %c, posicion: %p\n",
         apuntadorCaracter, apuntadorCaracter, apuntadorCaracter);
  printf("*apuntadorCaracter = decimal: %d, caracter: %c, posicion: %p\n",
         *apuntadorCaracter, *apuntadorCaracter, *apuntadorCaracter);
  printf("\n");
  printf("Posiciones de memoria --> apuntadorCaracter = &caracter\n");
  printf("Datos en memoria --> *apuntadorCaracter = caracter\n");
  printf("\n");

  for (caracter = 'A'; caracter <= 'Z'; caracter++) {
    printf("%c ", *apuntadorCaracter);
  }

  printf("\n");

  for (caracter = 'a'; caracter <= 'z'; caracter++) {
    printf("%c ", *apuntadorCaracter);
  }

  printf("\n");

  return 0;
}
