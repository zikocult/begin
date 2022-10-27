#include <stdio.h>
int factorial(int inicio);

int main(int argc, char *argv[]) {
  int fact;
  printf("Introduzca el número a factorizar: ");
  scanf("%i", &fact);

  factorial(fact);
  printf("El factorial de fact es = %i\n", factorial(fact));

  return 0;
}

int factorial(int inicio) {
  int resultado = 0;
  
  if (inicio < 2) {
    return 1;
  }
  resultado = inicio * factorial(inicio - 1);

  return resultado;
}
