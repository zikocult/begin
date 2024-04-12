// Determinar la suma de todos los números que de un usuario

#include <stdio.h>

int main() {
  int suma, numero;
  suma = numero = 0;

  do {
    printf("Introduzca un número, se irá sumando al resto.\nPara terminar, "
           "introduzca el 0: ");
    scanf("%i", &numero);
    suma = numero + suma;
  } while (numero != 0);

  printf("El total de la suma es: %i\n", suma);

  // El teacher, el que volia es que es sumessin els números successius fins al
  // número introduit, es a dir, 1+2+3+4+......

  int suma2, final, i;
  suma2 = i = 0;
  printf("Introduzca hasta el número que quiere sumar: ");
  scanf("%i", &final);

  while (i <= final) {
    suma2 += i; // Ho de sempre, però per anar recordant, això es el mateix que
                // "suma2 = suma2 + i"
    i++;
  }

  printf("El total de la suma sucesiva es: %i\n", suma2);

  return 0;
}
