/*
Programa para comprobar si un año es bisiesto o no
Un año es bisiesto si es divisible por 4 pero no por 100,
o bien es divisible por 400*/

#include <stdbool.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int año;
  bool bisiesto;

  printf("Introduzca el año a comprobar: ");
  scanf("%i", &año);

  // Així funciona, però vull probar assignant a un bool, necessaria nova
  // biblioteca pel tipus de variable

  // if (((año % 4 == 0) && (año % 100 != 0)) || (año % 400 == 0)) {
  //   printf("El año %i es bisiesto\n", año);
  // } else {
  //   printf("El año %i no es bisiesto\n", año);
  // }
  bisiesto = ((año % 4 == 0) && (año % 100 != 0)) || (año % 400 == 0);

  if (bisiesto) { // Retorna un TRUE
    printf("El año %i es bisiesto\n", año);
  } else { // Retorna un FALSE
    printf("El año %i no es bisiesto\n", año);
  }

  // printf("%d\n", bisiesto);

  return 0;
}
