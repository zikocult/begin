#include <stdio.h>
#include <string.h>

struct persona {
  char nombre[20];
  int edad;
  char carrera[30];
} persona1 = {"Jorge", 19, "Profesor"},
  persona2 = {"Guillem", 43, "Informatico"};

struct ejemplo {
  char birli[10];
  int pasta;
} ejemplo1, ejemplo2;

int main() {

  printf("Su nombre es: %s\n", persona1.nombre);
  printf("La edad es de: %i\n", persona1.edad);
  printf("La profesión de %s es: %s\n", persona1.nombre, persona1.carrera);
  printf("\n");
  printf("Su nombre es: %s\n", persona2.nombre);
  printf("La edad es de: %i\n", persona2.edad);
  printf("La profesión de %s es: %s\n", persona2.nombre, persona2.carrera);

  return 0;
}
