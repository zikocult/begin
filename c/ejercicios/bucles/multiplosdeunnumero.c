#include <stdio.h>

int main(int argc, char *argv[]) {
  int num, i;
  printf("Introduzca el número al que buscar los múltiplos\n");
  scanf("%i", &num);

  printf("Los multiplos de %i son: ", num);

  // Pues no era així el que volia el profe, però està bé per trobar divisors
  //
  // for (i = 1; i < num; i++) {
  //   cociente = num % i;
  //
  //   if (cociente == 0) {
  //     printf("%i, ", i);
  //   }
  // }
  //
  // printf("%i\n", num);
  // El que vol es trobar els multiples de un número fins a 100

  i = 1;
  while (i <= 100) {
    if (i % num == 0) {
      printf("%d ,", i);
    }
    i++;
  }
  return 0;
}
