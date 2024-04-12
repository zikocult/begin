#include <stdio.h>
void comprobar(int cambio);

int main(int argc, char *argv[]) {
  int num;

  do {

    printf("Introduzca un número del 1 al 10\n");
    scanf("%i", &num);

  } while (num < 1 || num > 10);

  comprobar(num);

  return 0;
}

void comprobar(int cambio) {
  switch (cambio) {
  case 1:
    printf("Uno\n");
    break;
  case 2:
    printf("Dos\n");
    break;
  case 3:
    printf("Tres\n");
    break;
  case 4:
    printf("Cuatro\n");
    break;
  case 5:
    printf("Cinco\n");
    break;
  case 6:
    printf("Seis\n");
    break;
  case 7:
    printf("Siete\n");
    break;
  case 8:
    printf("Ocho\n");
    break;
  case 9:
    printf("Nueve\n");
    break;
  case 10:
    printf("Diez\n");
    break;
  }
}
