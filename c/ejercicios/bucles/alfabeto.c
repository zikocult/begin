#include <stdio.h>

int main(int argc, char *argv[]) {
  char letra = 'a';

  printf("Abecedario: ");

  do {
    printf(" %c, ", letra);
    letra++; // Això es pot fer perquè les lletres son ASCII que es on suma
  } while (letra < 'z');

  printf(" %c\n", letra);

  return 0;
}
