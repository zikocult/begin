#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int dni, rest;

  printf("Introduzca los números de su DNI: ");
  scanf("%i", &dni);

  rest = dni % 23;

  switch (rest) {
  case 0:
    printf("La letra de su DNI es T\n");
    break;
  case 1:
    printf("La letra de su DNI es R\n");
    break;
  case 2:
    printf("La letra de su DNI es W\n");
    break;
  case 3:
    printf("La letra de su DNI es A\n");
    break;
  case 4:
    printf("La letra de su DNI es G\n");
    break;
  case 5:
    printf("La letra de su DNI es M\n");
    break;
  case 6:
    printf("La letra de su DNI es Y\n");
    break;
  case 7:
    printf("La letra de su DNI es F\n");
    break;
  case 8:
    printf("La letra de su DNI es P\n");
    break;
  case 9:
    printf("La letra de su DNI es D\n");
    break;
  case 10:
    printf("La letra de su DNI es X\n");
    break;
  case 11:
    printf("La letra de su DNI es B\n");
    break;
  case 12:
    printf("La letra de su DNI es N\n");
    break;
  case 13:
    printf("La letra de su DNI es J\n");
    break;
  case 14:
    printf("La letra de su DNI es Z\n");
    break;
  case 15:
    printf("La letra de su DNI es S\n");
    break;
  case 16:
    printf("La letra de su DNI es Q\n");
    break;
  case 17:
    printf("La letra de su DNI es V\n");
    break;
  case 18:
    printf("La letra de su DNI es H\n");
    break;
  case 19:
    printf("La letra de su DNI es L\n");
    break;
  case 20:
    printf("La letra de su DNI es C\n");
    break;
  case 21:
    printf("La letra de su DNI es K\n");
    break;
  case 22:
    printf("La letra de su DNI es E\n");
    break;
  case 23:
    printf("La letra de su DNI es T\n");
    break;
  default:
    break;
  }
  return 0;
}
