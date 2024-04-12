#include "alumno.h"

void consumirNuevaLinea(void) {
  int c = getchar();

  while (c != EOF && c != '\n') 
    c = getchar();
}

Alumno crearAlumno(int CC, char *nombre, char *apellido, float promedio) {
  Alumno alumnoCreado;

  alumnoCreado.numCuenta = CC;
  strcpy(alumnoCreado.nombre, nombre);
  strcpy(alumnoCreado.apellido, apellido);
  alumnoCreado.promedio = promedio;

  return (alumnoCreado);
}

void imprimirAlumno(Alumno alumnoPrint) {
  printf("Numero de cuenta: %d\n", alumnoPrint.numCuenta);
  printf("Nombre: %s\n", alumnoPrint.nombre);
  printf("Apellido: %s\n", alumnoPrint.apellido);
  printf("Promedio: %.2f\n\n\n", alumnoPrint.promedio);
}

void llenarAlumno(Alumno *din) {

  printf("Llena los datos del nuevo alumno\n");

  printf("Escriba el nombre del alumno: ");
  fflush(stdin);
  // scanf("%s", din->nombre);
  fgets(din->nombre, 20, stdin);
  strtok(din->nombre, "\n");

  printf("Escriba el apellido del alumno: ");
  fflush(stdin);
  // scanf("%s", din->apellido);
  fgets(din->apellido, 20, stdin);
  strtok(din->apellido, "\n");

  printf("Escribe su número de cuenta: ");
  fflush(stdin);
  scanf("%d", &din->numCuenta);

  printf("Escribe su promedio: ");
  fflush(stdin);
  scanf("%f", &din->promedio);

  printf("\n");
  crearAlumno(din->numCuenta, din->nombre, din->apellido, din->promedio);
  imprimirAlumno(*din);
  consumirNuevaLinea();

}
