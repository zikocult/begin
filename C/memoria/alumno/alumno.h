#ifndef ALUMNO_H
#define ALUMNO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Direccion {
  char calle[40];
  short num;
  char ciudad[40];
  char cPostal;
} Direccion;

typedef struct Alumno {
  int numCuenta;
  char nombre[20];
  char apellido[20];
  float promedio;
  Direccion domicilio;
} Alumno;

void consumirNuevaLinea(void);
Alumno crearAlumno(int, char *, char *, float);
void imprimirAlumno(Alumno);
void llenarAlumno(Alumno *);

#endif
