#include "pila.h"

Pila crearPila() {
  Pila p;
  p.tope = 0;
  return p;
}

int isempty(Pila p) {
  if (p.tope == 0)
    return (1);
  return (0);
}

void Push(Pila *p, int x) {
  p->lista[p->tope] = x;
  p->tope++;
}

int pop(Pila *p) {
  if (isempty(*p) == 1) {
    printf("La pila está vacía\n");
    return (-1);
  } else {
    int aux = p->lista[p->tope - 1];
    p->tope--;
    return (aux);
  }
}

int top(Pila p) {
  if (isempty(p) == 1) {
    printf("La pila está vacía\n");
    return (-1);
  } else {
    return (p.lista[p.tope - 1]);
  }
}
