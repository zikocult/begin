#include <stdio.h>
void conversion(int num);

int main() {
  int num;

  printf("Introduzca el número a convertir\n");
  scanf("%i", &num);

  conversion(num);
  return 0;
}

// A mi m'imprimeix al revés
//
// void conversion(int num) {
//   if (num / 2 < 1) {
//     printf("1\n");
//   } else {
//     printf("%i", (num%2));
//     num = num / 2;
//     conversion(num);
//   }
// }

void conversion(int num) {
  if (num > 1) {
    conversion(num / 2);
  }
  printf("%i", num % 2);
}
