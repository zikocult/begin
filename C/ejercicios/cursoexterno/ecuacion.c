#include "math.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
  float a, b, c, result1, result2, cociente;
  printf("Introduzca los coeficientes de la ecuación\n");
  printf("\n");
  scanf("%f %f %f", &a, &b, &c);

  cociente = (pow(b, 2)) - (4 * a * c);

  if (a == 0) {
    printf("Ecuación de primer grado\n");
    result1 = (c * -1) / b;
    printf("El resultado es igual a %.2f/%.2f = %.2f\n", c, (b * -1), result1);
  } else if (cociente < 0) {
    printf("La ecuación no tiene un resultado real\n");
  } else {
    result1 = ((b * -1) - sqrt(cociente)) / (2 * a);
    result2 = ((b * -1) + sqrt(cociente)) / (2 * a);
    printf("X1 = %.2f\nX2 = %.2f\n", result1, result2);
  }

  return 0;
}
