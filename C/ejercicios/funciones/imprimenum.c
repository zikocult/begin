#include <stdio.h>
int imprime(int impr);

int main(int argc, char *argv[]) {
  int impr, i;
  printf("Introduzca un número: ");
  scanf("%i", &impr);

  for (i = impr; i > 0; i--) {
    printf("%i\n", imprime(i));
  }

  return 0;
}

int imprime(int impr) {
  if (impr == 0 || impr == 1) {
    return 1;
  } else {
    return imprime(impr - 1) + 1;
    // No entenc que si no ho poses així no funcioni, però un "return
    // impr" ja funcionaria bé
  }
}
