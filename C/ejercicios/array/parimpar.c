/* Crear un programa que tenga un array de 100 numeros aleatorios entre 1 y
 * 1000. Una vez creado, organizarlo de tal manera que almacene los números
 * pares en un array y los impares en otro */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int origen[100], pares[100], impares[100];
  int par = 0, impar = 0;
  srand(time(NULL));

  for (int i = 0; i < 100; i++) {
    origen[i] = pares[i] = impares[i] = 0;
  }

  for (int i = 0; i < 100; i++) {
    origen[i] = 1 + rand() % ((1000 + 1) - 1);
    if (origen[i] % 2 == 0) {
      pares[par] = origen[i];
      par++;
    } else {
      impares[impar] = origen[i];
      impar++;
    }
  }

  for (int i = 0; i < 100; i++) {
    printf("Par[%i] = %i --> Impar[%i] = %i\n", i + 1, pares[i], i + 1,
           impares[i]);
  }

  return 0;
}
