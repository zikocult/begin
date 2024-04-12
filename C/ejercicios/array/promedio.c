// Es podria fer perfectament sense un array i he inclòs ho del random per
// afegir alguna cosa extra a l'exercici

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int media[8], num, sum = 0;
  srand(time(NULL));

  for (int i = 0; i < 8; i++) {
    num = 1 + rand() % ((10 + 1) - 1);
    media[i] = num;
  }

  for (int i = 0; i < 8; i++) {
    sum += media[i];
  }

  printf("\nLa media de 8 números random es = %i\n", sum / 8);

  return 0;
}
