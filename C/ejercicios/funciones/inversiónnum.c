#include <stdio.h>
void invertir(int numero);

int main(int argc, char *argv[]) {
  int numero;

  do {
    printf("Introduzca un número: ");
    scanf("%i", &numero);
  } while (numero < 0);

  invertir(numero);
  printf("\n");

  return 0;
}

void invertir(int numero) {
  printf("%i", numero % 10);
  if (numero > 10) {
    invertir(numero / 10);
  }
}
