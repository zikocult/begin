#include "coladocumentos.h"

Cola crearCola() {
  Cola c;
  c.primero = 1;
  c.ultimo = 0;
  return c;
}

int isempty(Cola c) {
  if (c.primero == c.ultimo + 1)
    return (0);
  return (1);
}

void encolar(Cola *c, Documento x) {
  c->Documento[c->ultimo] = x;
  c->ultimo++;
}

Documento desencolar(Cola *c) {
  Documento aux;
  if (isempty(*c) == 0) {
    printf("La cola está vacía \n");
  } else {
    aux = c->Documento[c->primero - 1];
    c->primero++;
    if (c->primero == c->ultimo + 1) {
      *c = crearCola();
    }
  }
  return aux;
}

Documento firstCola(Cola c) {
  c.primero++;
  return c.Documento[c.primero - 1];
}

void consumirNuevaLinea(void) {
  int c;
  do {
    c = getchar();
  } while (c != EOF && c != '\n');
}

