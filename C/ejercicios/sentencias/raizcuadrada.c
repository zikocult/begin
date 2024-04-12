#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[])
{
  float numero, raiz;

  printf("escribe un número\n");
  scanf("%f", &numero);

  if (numero >=0) {
    raiz = sqrt(numero);
    printf("El resultado de la raiz es %.3f\n", raiz);
  } else {
    printf("El resultado es imaginario\n");
  }

  return 0;
}
