#include <stdio.h>

//TODO: revisar el printf
//FIXME: arreglar las diferentes variables

int main(int argc, char *argv[]) {
  float a, b;
  printf("Introduzca dos números a analizar si su suma es mayor, menor o igual "
      "a 5\n");
  scanf("%f %f", &a, &b);

  if (a + b == 5) {
    printf("El resultado es por el culo te la hinco\n");
  } else if (a + b < 5) {
    printf("El resultado es menor que 5\n");
  } else {
    printf("El resultado es mayor que 5\n");
  }

  return 0;
}
