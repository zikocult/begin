/* Escribe un programa que solicite al usuario llenar un arreglo de 10 elementos
 * (únicamente con 0's y 1's). Una vez que el usuario llene el arreglo con el
 * número binario, podrá seleccionar entre alguna codificación.
 *
 * a) binario puro
 * b) punto fijo (6 bit entero y 4 bit decimal)
 * c) complemento a 2
 *
 * El programa realizará la conversión y la mostrará como salida
 * el resultado en representación decimal
 */

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

void conversionbin(int begin[]);
void puntofijo(int begin[]);
void complementoados(int begin[]);
void conversiondec(int begin[]);
void listar(int begin[]);

int main() {
  int begin[10], opcion;
  bool salir = false;

  printf("Introduzca 1 o 0 en cada posición del array: \n");
  for (int i = 0; i < 10; i++) {
    printf("Posición %i: ", i);
    scanf("%i", &begin[i]);
  }

  while (salir == false) {

    printf("\n");
    printf("--------------------------------------------------\n");
    printf(
        "Introduzca la opción que desee\n1) Conversión a binario\n2) "
        "Conversión a punto fijo (6 bit entero y 4 bit decimal)\n3) "
        "Complemento a 2\n4) Conversion a decimal\n0) Salir\nSu opción es: ");
    scanf("%i", &opcion);

    switch (opcion) {
    case 1:
      printf("Seleccionaste binario puro\n\n");
      conversionbin(begin);
      break;
    case 2:
      printf("Seleccionaste punto fijo\n\n");
      puntofijo(begin);
      break;
    case 3:
      printf("Seleccionaste complemento a 2\n\n");
      complementoados(begin);
      break;
    case 4:
      printf("Seleccionaste conversion a decimal\n\n");
      conversiondec(begin);
      break;
    case 0:
      salir = true;
      break;
    default:
      printf("Número introducido erroneo\n");
      break;
    }
  }
  return 0;
}

void conversionbin(int begin[]) {

  long mult = 1, result = 0;
  listar(begin);

  for (int i = 9; i >= 0; i--) {
    if (begin[i] == 1) {
      result = (begin[i] * mult) + result;
    }
    mult = mult * 10;
  }
  printf("El resultado es %ld\n", result);
}

void puntofijo(int begin[]) {
  listar(begin);
  int suma = 0, valor = 32;
  float sumadecimal = 0, valordecimal = 0.5;

  // parte entera
  for (int i = 0; i < 6; i++) {
    if (begin[i] == 1) {
      suma += valor;
    }
    valor /= 2;
  }

  // parte decimal
  for (int i = 6; i < 10; i++) {
    if (begin[i] == 1) {
      sumadecimal += valordecimal;
    }
    valordecimal /= 2;
  }
  printf("El valor del numero en punto fijo es %.4f\n", suma + sumadecimal);
}

void complementoados(int begin[]) {
  // listar(begin);
  int pos;

  for (int pos = 0; pos < 10; ++pos) {
    if (begin[pos] == 1) {
      begin[pos] = 0;
    } else {
      begin[pos] = 1;
    }
    pos = 9;
    while (begin[pos] == 1) {
      begin[pos] = 0;
      pos--;
      if (begin[pos] == 0) {
        begin[pos] = 1;
        break;
      }
    }
    if (begin[pos] == 0) {
      begin[pos] = 1;
    }
    printf("\n\n");
    listar(begin);
  }
}

void conversiondec(int begin[]) {
  int result = 0, j = 9;
  listar(begin);

  // Faig un canvi de manera respecte el de coma flotant, aquesta manera es la
  // que he ideat jo, però n'hi ha mes
  // Haig d'usar la j = 9 (valor màxim que es pot aconseguir amb un array de
  // 10), doncs el index i no marca el valor de la potencia, si no que comença
  // per 2 a la 0 quan tindria que ser 2 a la 9.

  for (int i = 0; i < 10; i++) {

    if (begin[i] == 1) {
      result += pow(2, j);
    }
    j--;
  }
  printf("El resultado es %d\n", result);
}

void listar(int begin[]) {
  for (int i = 0; i < 10; i++) {
    printf("pos[%i] = %i\n", i, begin[i]);
  }
}
