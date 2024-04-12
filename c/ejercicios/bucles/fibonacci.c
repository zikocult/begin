// Serie de Fibonacci

#include "stdio.h"

int main() {
  int n, i, x = 0, y = 1, z = 1;
  printf("Introduzca el número a Fibonaccear\n");
  scanf("%i", &n);
  printf("1, ");

  for (i = 0; i <= n; i++) {
    z = x + y;
    x = y;
    y = z;
    printf("%i, ", z);
  }

  return 0;
}
