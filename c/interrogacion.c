#include <stdio.h>

int main (int argc, char *argv[])
{
  int numero;

  printf("Escribe un número");
  scanf("%i", &numero);
  

  // Esto es básicamente un IF pero con diferente notación
  
  (numero%2==0) ? printf("El número es par\n") : printf("El número es impar\n");

  return 0;
}
