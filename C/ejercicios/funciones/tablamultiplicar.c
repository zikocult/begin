#include <stdio.h>
void tablamultiplicar(int n);

int main(int argc, char *argv[]) {
  int mult;
  printf("Dame el número del que quieres la tabla de multiplicar: ");
  scanf("%i", &mult);

  tablamultiplicar(mult);

  return 0;
}

void tablamultiplicar(int n) {
  int i;
  for (i = 0; i <= 10; i++) {
    printf("%i x %i = %i\n", n, i, n * i);
  }
}
