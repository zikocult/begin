// Hacer una variable de tipo int, otra de tipo float y por último una de tipo
// char, almacenar datos en cada uan de las variables, posteriormente indicar la
// posicion de memoria donde se encuentran guardados los datos de cada variable
// con punteros

#include <stdio.h>

int main (int argc, char *argv[])
{
  int a = 13, *apuntaA = &a;
  float b = 13.45, *apuntaB = &b;
  char c = 'B', *apuntaC = &c;

  // apuntaA = &a;
  // apuntaB = &b;
  // apuntaC = &c;

  printf("La posicion de memoria de a es igual %i en la posicion de memoria %p\n", *apuntaA, apuntaA);
  printf("La posicion de memoria de b es igual %.2f en la posicion de memoria %p\n", *apuntaB, apuntaB);
  printf("La posicion de memoria de c es igual %c en la posicion de memoria %p\n", *apuntaC, apuntaC);

  return 0;
}
