// Vamos a ver la diferencia de pasar un parámetro a un función por valor de una
// variable o por la referencia de memoria apuntando a su valor, es decir, paso
// de variable por VALOR o paso de variable por REFERENCIA

#include <stdio.h>

// Paso de parámetro por valor
void valor(int a) {
  a += 10;
  printf("\nPosición memoria en la función valor: %p\n", &a);
}

// Paso de parámetro por referencia
void referencia(int *a) {
  *a += 10;
  printf("\nPosición memoria en la función referencia: %p\n", &a);
}

int main() {
  int numero;

  printf("Escribe un numero: ");
  scanf("%d", &numero);

  valor(numero);
  // no cambia el valor, pues sólo modifica el valor dentro de la función
  printf("\nValor después de la funcion: %d", numero);
  printf("\nPosición después de la funcion: %p", &numero);
  printf("\nSe ejecuta la función, pero el valor queda en la misma");

  printf("\n\nValor antes de la funcion: %d", numero);
  referencia(&numero);
  // Ahora si cambia el valor, pues lo hemos cambiado directamente en la memoria
  printf("\nValor después de la funcion: %d", numero);
  printf("\nPosición después de la funcion: %p", &numero);
  printf("\nSe ejecuta la función y el valor se almacena en la posición de "
         "memoria\n");

  return 0;
}
