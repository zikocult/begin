#include <stdio.h>
void conversion(int num);
void cuentaregresiva(int numero);

int main() {
  int num, num2;

  printf("Introduzca el número a convertir\n");
  scanf("%i", &num);

  conversion(num);

  // while (num > 1) {
  //   printf("%i", num % 2);
  //   num = num / 2;
  // }
  // printf("\n");

  printf("\n\nIntroduzca un número a hacer cuenta atrás\n");
  scanf("%i", &num2);
  cuentaregresiva(num2);

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

// Poso aquest exemple, doncs aquest si que va de davant enrere, la diferència
// es quan comença a exectuar segons el primer IF que afegim

void cuentaregresiva(int numero) {
  if (numero < 0) {
    return;
  } else {
    printf("%i\n", numero);
    cuentaregresiva(numero - 1);
  }
}

// La diferencia principal es que en el primer comença quan la condició es
// valida i per tan torna a realitzar els passos anteriors i en la segona,
// valida fins acabar
