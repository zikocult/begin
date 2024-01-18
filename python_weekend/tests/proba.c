#include <stdio.h>

int main() {
  long a = 0, b = 1, auxiliar;
  int i = 0, repes;

  printf("Introduzca número de repeticiones: ");
  scanf("%i", &repes);

  while (i < repes) {
    printf("%i - %li\n", i, a);
    auxiliar = b;
    b = a + b;
    a = auxiliar;
    i++;
  }
  printf("\n");
  return (0);
}
