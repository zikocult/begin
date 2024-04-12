/* Calcular la tarifa de saldo del teléfono
 * de 1000 a 1500 premium
 * de 500 a 999 intermedia
 * de 100 a 499 basica
 */

#include <stdio.h>

int main (int argc, char *argv[])
{
  int pago;
  
  printf("Cuanto estás dispuesto a pagar de tarifa?\n");
  scanf("%i", &pago);

  if (pago < 100) {
    printf("No tenemos tarifas por tan poco dinero\n");
  } else if (pago >= 100 and pago < 500) {
    printf("Tu tarifa sería la basica\n");  
  } else if (pago >= 500 and pago < 1000) {
    printf("Tu tarifa sería la intermedia\n");  
  } else {
    printf("Tu tarifa sería la premium\n");
  }

  return 0;
}
