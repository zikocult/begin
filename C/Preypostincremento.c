
// ¿Preincrementar o postincrementar?

// Recordando un poco, el preincremento

//* int a = 0;
//* int b = ++a;

// hace a=1 y b=1, mientras que el postincremento

//! int a = 0;
//! int b = a++;

// hace a=1 y b=0, esto significa que b obtuvo el valor de a anterior al
// incremento.

#include <stdio.h>

int main() {

  int a = 0;
  int b = ++a;

  // Primero incrementará el valor de A y después asignará A a B

  printf("El valor de a es de: %i\n", a);
  printf("El valor de b es de: %i\n", b);
  printf("\n\n");

  // Primero asignará el valor de C a D y después incrementará el valor de C

  int c = 0;
  int d = c++;

  printf("El valor de c es de: %i\n", c);
  printf("El valor de d es de: %i\n", d);

  return 0;
}
