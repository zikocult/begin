/* Se declaran de la siguiente manera:
 * TipoDeDato NombreDelArray[Tamaño] = {Valor1, Valor2, Valor3, ..., Valor N}
 *
 * Array Unidimensional
 * Es una secuencia de datos
 *
 * Array o Arreglos Unidimensionales
 *
 * Arrays Enteros
 * Arrays Flotantes
 * Arrays de Caracter
 * Arrays de String (Conjuntos de Caracteres)
 *
 * Empiezan en el cero NUNCA EN EL UNO
 *
 */

#include <stdio.h>

int main() {
  // Declaración de un array con 3 indices y valores asignados
  int array[3] = {12, 34, 76};

  // Accedemos a los datos de manera individual
  printf("Primer valor %i\n", array[0]);
  printf("Segundo valor %i\n", array[1]);
  printf("Tercer valor %i\n", array[2]);

  // También podemo manipular los datos a nuestro gusto
  array[0] = 54;
  printf("El nuevo primer valor es %i\n", array[0]);

  // Primer ejemplo
  int i;
  int first[10];

  for (i = 0; i < 10; i++) {
    printf("Introduzca el valor para el indice %i: ", i + 1);
    scanf("%i", &first[i]);
  }

  // Es podria fer també amb un for sense problemes, però per variar
  int indice = 0;
  while (indice < 10) {
    printf("%i, ", first[indice]);
    indice++;
  }
  printf("\n");

  return 0;
}
