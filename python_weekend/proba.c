#include <stdio.h>

int main() {
  int i, a, b, auxiliar, repes;
  a = 0;
  i = 0;
  b = 1;
  scanf("%i", &repes);
  printf("0 ");
  while (i < repes) {
    printf("%i ", a);
    auxiliar = b;
    b = a + b;
    a = auxiliar;
    i++;
  }
  printf("\n");
  return (0);
};
