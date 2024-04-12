/* Hacer 2 arrays de cadenas de caracteres, almacenar 2 nombres cada uno dentro
 * de su respectiva variable y luego intercambiar el contenido de los array
 */

#include <stdio.h>
#include <string.h>
#define size 20

int main(int argc, char *argv[]) {
  char nombre1[size], nombre2[size], intercambio[size];

  printf("Introduzca el primer nombre: ");
  fgets(nombre1, size, stdin);
  strtok(nombre1, "\n");

  printf("Introduzca el segundo nombre: ");
  fgets(nombre2, size, stdin);
  strtok(nombre2, "\n");

  for (int i = 0; i < size; i++) {
    printf("Nombre1[%i] = %i\n", i, nombre1[i]);
    // printf("Nombre2[%i] = %i\n", i, nombre2[i]);
  }

  printf("\nNombre 1 introducido es: %s\n", nombre1);
  printf("Nombre 2 introducido es: %s\n", nombre2);

  strcpy(intercambio, nombre1);
  strcpy(nombre1, nombre2);
  strcpy(nombre2, intercambio);

  printf("\nNombre 1 ahora es: %s\n", nombre1);
  printf("Nombre 2 ahora es: %s\n", nombre2);
  printf("Variable auxiliar ha quedado como: %s\n", intercambio);

  return 0;
}
