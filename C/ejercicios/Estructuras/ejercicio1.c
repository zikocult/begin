#include <stdio.h>
#include <string.h>

struct Direccion {
  char calle[30];
  short numero;
  char ciudad[20];
  int cp;
};

struct alumno {
  int numCuenta;
  char nombre[25];
  char apellido[25];
  float promedio;
  struct Direccion direccion;
};

int main(int argc, char const *argv[]) {
  struct alumno alumno1;

  strcpy(alumno1.nombre, "Guillem");
  // es millor strcpy per a fer la assignació de strings
  strcpy(alumno1.apellido, "Barulls");
  alumno1.numCuenta = 12345;
  alumno1.promedio = 7.14;
  strcpy(alumno1.direccion.calle, "Mare de Deu de Lorda");
  alumno1.direccion.numero = 24;
  strcpy(alumno1.direccion.ciudad, "Barcelona");
  alumno1.direccion.cp = 8033;

  printf("\nEl nombre del alumno es: %s", alumno1.nombre);
  printf("\nEl apellido es: %s", alumno1.apellido);
  printf("\nEl numCuenta es: %d", alumno1.numCuenta);
  printf("\nEl promedio es: %.2f", alumno1.promedio);
  printf("\nEl direccion es: %s", alumno1.direccion.calle);
  printf("\nEl direccion es: %i", alumno1.direccion.numero);
  printf("\nEl direccion es: %s", alumno1.direccion.ciudad);
  printf("\nEl direccion es: %i", alumno1.direccion.cp);
  printf("\n");

  // Apuntadores

  struct alumno *apAlumno;
  apAlumno = &alumno1;
  strcpy(apAlumno->direccion.calle, "Prueba");
  apAlumno->direccion.cp = 8030;
  strcpy(apAlumno->nombre, "Guillem2");

  printf("\nEl nombre del alumno es: %s", alumno1.nombre);
  printf("\nEl apellido es: %s", alumno1.apellido);
  printf("\nEl numCuenta es: %d", alumno1.numCuenta);
  printf("\nEl promedio es: %.2f", alumno1.promedio);
  printf("\nEl direccion es: %s", alumno1.direccion.calle);
  printf("\nEl direccion es: %i", alumno1.direccion.numero);
  printf("\nEl direccion es: %s", alumno1.direccion.ciudad);
  printf("\nEl direccion es: %i", alumno1.direccion.cp);
  printf("\n");

  return 0;
}
