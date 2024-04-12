/*
 * Funciones matemáticas:
 * floor(x) --> Redondea al entero menor mas cercano
 * ceil(x) --> Redondea el entero mayor mas cercano
 * fabs(x) --> Devuelve el valor absoluto de x
 * sqrt(x) --> Saca la raiz cuadrada de x
 * fmod(x,y) --> Calcula el resto de la división de x/y
 * pow(x,y) --> Calcula x elvado a la potencia de y
 */
#include <stdio.h>
#include <math.h>

void funcionMate() {
  float x, cambio;

  printf("\nEscribe un número: ");
  scanf("%f", &x);

  cambio = ceil(x); // Redondeja al major
  printf("%.2f\n", cambio);

  cambio = floor(x); // Redondeja al inferior
  printf("%.2f\n", cambio);

  cambio = fabs(x); // Valor absolut
  printf("%.2f\n", cambio);

  cambio = sqrt(x); // Raíz cuadrada de X
  printf("%.2f\n", cambio);

  cambio = sqrt(fabs(x)); // Per a fer l'àrrel del absolut
  printf("%.2f\n", cambio);

  cambio = fmod (x, 3); // Resto de una división
  printf("%.2f\n", cambio);

  cambio = pow (x, 3); // x elevado a 3
  printf("%.2f\n", cambio);

}

int main() {
  funcionMate();
  return 0;
}
