// Ordenar números de manera ascendente

#include <stdio.h>

void ascendente(int a, int b, int c);

int main() {
  int a, b, c;
  printf("Escribe tres números: ");
  scanf("%d %d %d", &a, &b, &c);

  ascendente(a, b, c);

  return 0;
}

void ascendente(int a, int b, int c) {
  if (a >= b && a >= c) {
    if (b >= c) {
      printf("%d %d %d\n", c, b, a);
    } else {
      printf("%d %d %d\n", b, c, a);
    }
  }

  if (b >= a && b >= c) {
    if (a >= c) {
      printf("%d %d %d\n", c, a, b);
    } else {
      printf("%d %d %d\n", a, c, b);
    }
  }

  if (c >= a && c >= b) {
    if (a >= b) {
      printf("%d %d %d\n", b, a, c);
    } else {
      printf("%d %d %d\n", a, b, c);
    }
  }
}

// Es mejor el método de la burbuja, pero por el momento no trabajamos con
// Arrays, lo dejo para mas adelante.
