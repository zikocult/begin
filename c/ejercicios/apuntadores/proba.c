#include <stdio.h>

int main(void) {
  int x;
  int y;
  int *pX;

  x = 4;
  y = 25;
  pX = &y;

  printf("Valors x = %d pX = %d y = %d\n", x, *pX, y);
  printf("Memoria x = %p pX = %p y = %p\n", &x, pX, &y);
  printf("\n");

  pX = &x;

  printf("Valors x = %d pX = %d y = %d\n", x, *pX, y);
  printf("Memoria x = %p pX = %p y = %p\n", &x, pX, &y);
  printf("\n");

  *pX = y;

  printf("Valors x = %d pX = %d y = %d\n", x, *pX, y);
  printf("Memoria x = %p pX = %p y = %p\n", &x, pX, &y);
  printf("\n");
  return 0;
}
