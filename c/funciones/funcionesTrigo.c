/*
 * Funciones trigonométricas
 *
 * acos(x) --> Calcula el Arco coseno de x
 * asin(x) --> Calcula el Arco seno de x
 * atan(x) --> Calcula el Acro tangente de x
 * cos(x) --> Calcula el coseno de x
 * sin(x) --> Calcula el sino de x
 * tan (x) --> Calcula la tangente de x
 */

#include <math.h>
#include <stdio.h>

void funcionTrigonometrica() {
  float result, x;
  printf("Introduzca un número a realizar las funciones\n");
  scanf("%f", &x);

  result = acos(x);
  printf("\nAcos = %.2f", result);

  result = asin(x);
  printf("\nAsin = %.2f", result);

  result = atan(x);
  printf("\nAtan = %.2f", result);

  result = sin(x);
  printf("\nsin = %.2f", result);

  result = cos(x);
  printf("\nCos = %.2f", result);

  result = tan(x);
  printf("\nTan = %.2f\n", result);

}

int main(int argc, char *argv[]) {
  funcionTrigonometrica();
  return 0;
}
