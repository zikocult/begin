/* Array o Arreglos Unidimensionales
 *
 * Arrays Enteros
 * Arrays Flotantes
 * Arrays de Caracter
 * Arrays de String (Conjuntos de Caracteres)
 */

#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {

  // Array Entero
  int i, a[5] = {1, 2, 3, 4, 5};

  for (i = 0; i < 5; i++) {
    printf("%i \n", a[i]);
  }
  // Array flotante
  float b[3] = {3.4, 5.6, 7.83};

  for (i = 0; i < 3; i++) {
    printf("%.2f \n", b[i]);
  }

  // Array de caracter
  char c[4] = {'t', 'r', 'e', 's'};
  for (i = 0; i < 4; i++) {
    printf("%c \n", c[i]);
  }

  // Array de String, esto está visto en STRINGS
  char d[20] = "Guillem guapo";
  printf("%s \n", d);

  char e[20];
  printf("Escribe tu nombre: ");
  fgets(e, 20, stdin);
  printf("Su nombre es: %s \n", e);

  return 0;
}
