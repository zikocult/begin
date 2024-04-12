#ifndef COLADOCUMENTOS_H
#define COLADOCUMENTOS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Documento {
  char nombre[30];
  char autor[30];
  int numeroPaginas;
} Documento;

typedef struct Cola {
  int primero;
  int ultimo;
  Documento Documento[100];
} Cola;

Cola crearCola();
int isempty(Cola c);
void encolar(Cola *c, Documento x);
Documento desencolar(Cola *c);
Documento firstCola(Cola c);
void consumirNuevaLinea(void);

#endif // !COLA_H
