#include <stdio.h>

int main(int argc, char *argv[]) {
  int count, precio, cambio, pago;

  printf("Introduzca el precio del producto: ");
  scanf("%i", &precio);
  printf("Introduzca el importe pagado: ");
  scanf("%i", &pago);

  if (pago < precio) {
    printf("Falta pasta para igualar\n");
  } else {
    cambio = pago - precio;
    count = 0;
    printf("El cambio que hay que dar es = %i\n", cambio);
    printf("\n");

    while (cambio >= 500) {
      count++;
      cambio = cambio - 500;
    }
    printf("%i billetes de 500\n", count);
    count = 0;

    while (cambio >= 100) {
      count++;
      cambio = cambio - 100;
    }
    printf("%i billetes de 100\n", count);
    count = 0;

    while (cambio >= 25) {
      count++;
      cambio = cambio - 25;
    }
    printf("%i monedas de 25\n", count);
    count = 0;

    while (cambio >= 5) {
      count++;
      cambio = cambio - 5;
    }
    printf("%i monedas de 5\n", count);
    count = 0;

    while (cambio >= 1) {
      count++;
      cambio = cambio - 1;
    }
    printf("%i monedas de 1\n", count);
  }

  return 0;
}
