// Sumar dos números y restar el siguiente
#include "stdio.h"

int main(int argc, char *argv[]) {
  // int suma, numero, i;
  // char salir;
  // suma = i = 0;
  // salir = 'n';
  //
  // do {
  //   numero = 0;
  //   printf("Introduzca un número para operar");
  //   printf(", si por el contrario quieres salir, pulsa Y: ");
  //   scanf("%i", &numero);
  //   scanf("%c", &salir);
  //
  //   if (i % 2 == 0) {
  //     suma = suma + numero;
  //     printf("El resultado parcial es %i\n", suma);
  //     i++;
  //   } else if (i % 2 != 0) {
  //     suma = suma - numero;
  //     printf("El resultado parcial es %i\n", suma);
  //     i++;
  //   }
  //
  // } while (salir != 'y');


  // La meva manera era correcta, però no era el que demanava el professor
  // Vaig a reescriure amb el que realment vol

  int sumatot, sumaneg, sumapos, i, n;
  printf("Hasta que número quiere que haga el ejercicio: ");
  scanf("%i", &n);
  i = 1;
  sumatot = sumaneg = sumapos = 0;

  while (i <= n) {
    if (i % 2 == 0) { // es par
      sumaneg = sumaneg + (i * (-1));
    } else {
      sumapos = sumapos + i;
    }
    i++;
  }

  sumatot = sumaneg + sumapos;
  printf("El valor final es = %i\n", sumatot);

  return 0;
}
