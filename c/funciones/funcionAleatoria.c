/* Funcion aleatoria
 * srand(time(NULL));
 * variable = limiteInferior + rand()%((limiteSuperior + 1) - (limiteinferior));
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void funcionAleatoria() {
  int num;
  srand(time(NULL));

  num = 1 + rand() % ((10 + 1) - 1);
  printf("%d\n", num);
}

int main(int argc, char *argv[]) {
  funcionAleatoria();
  return 0;
}
