#include <stdio.h>

void sumar();
void restar();
void multiplicar();
void dividir();

int main(int argc, char *argv[]) {
  int opcion;

  do {
    printf("Escoja una opción\n");
    printf(
        "1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\n5) Salir\nOpcion: ");
    scanf("%i", &opcion);

    switch (opcion) {
    case 1:
      sumar();
      break;
    case 2:
      restar();
      break;
    case 3:
      multiplicar();
      break;
    case 4:
      dividir();
      break;
    case 5:
      printf("Adiós\n");
      break;
    default:
      printf("Opción no válida, ¿qué mas quieres hacer?\n\n");
      break;
    }

  } while (opcion != 5);
  return 0;
}

void sumar () {
  int n1, n2, suma =0;
  printf("Introduzca dos números\n");
  scanf("%i %i", &n1, &n2);
  suma = n1 + n2;
  printf("La suma es igual a %i\n¿Qué mas quieres hacer?\n\n", suma);
}

void restar () {
  int n1, n2, resta=0;
  printf("Introduzca dos números\n");
  scanf("%i %i", &n1, &n2);
  resta = n1 - n2;
  printf("La resta es igual a %i\n¿Qué mas quieres hacer?\n\n", resta);
}

void multiplicar () {
  int n1, n2, multi=0;
  printf("Introduzca dos números\n");
  scanf("%i %i", &n1, &n2);
  multi = n1 * n2;
  printf("La multiplicación es igual a %i\n¿Qué mas quieres hacer?\n\n", multi);
}

void dividir () {
  int n1, n2, div=0;
  printf("Introduzca dos números\n");
  scanf("%i %i", &n1, &n2);
  div = n1 / n2;
  printf("La division es igual a %i\n¿Qué mas quieres hacer?\n\n", div);
}
