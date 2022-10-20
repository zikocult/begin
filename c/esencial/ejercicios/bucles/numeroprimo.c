// Saber si un número es primo

#include "stdio.h"

int main(int argc, char *argv[]) {
  int i, num, cont = 0;
  // char primo;
  printf("Introduzca el número a saber si es primo --> ");
  scanf("%i", &num);
  i = 2;
  // primo = 'y';
  //
  // while (i < num) {
  //   if (num % i == 0) {
  //     primo = 'n';
  //     break;
  //   }
  //   i++;
  // }
  //
  // if (primo == 'n') {
  //   printf("No es un número primo\n");
  // } else {
  //   printf("Se trata de un número primo\n");
  // }
  //
  // Les dues maneres son correctes, però per posar la manera del profe

  for (i = 1; i <= num; i++) {
    if (num % i == 0) {
      cont++;
    }
  }

  if (cont >
      2) { // això vol dir que es divisibe per mes números que ell mateix i 1
    printf("El numero %i no es primo\n", num);
  } else {
    printf("El numero %i si es primo\n", num);
  }

  return 0;
}
