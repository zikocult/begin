// Simular un cajero con entradas y salidas de capital

#include "stdio.h"

int main ()
{
  int opcion;
  float agregar, retirar, saldo;
  saldo=3000;
    
  printf(" \n");
  printf(" \n");
  printf("\t*********************************************\n");
  printf("\t** Esto es un simulador de tienda o Cajero **\n");
  printf("\t*********************************************\n");
  printf(" \n");

  do {
    printf(" \n");
    printf("Selecciona una acción\n");
    printf("\n1) Depositar dinero");
    printf("\n2) Retirar dinero");
    printf("\n3) Consultar el saldo");
    printf("\n4) Salir del cajero");
    printf(" \n");
    printf("\nOpcion seleccionada: ");
    scanf("%i", &opcion);

    switch (opcion) {
      case 1: printf("Cuanto dinero quiere dipositar\n");
              scanf("%f", &agregar);
              saldo += agregar;
              printf("Su saldo actual es de: %.2f€", saldo);
              break;
      case 2: printf( "Cuanto dinero quiere retirar\n");
              scanf("%f", &retirar);
              if (retirar > saldo) {
                printf("Tu saldo disponible es de: %.2f€, indique una cifra menor\n", saldo);
              } else {
                saldo -= retirar;
                printf("Aquí está su dinero, su nuevo saldo disponible es de: %.2f€\n", saldo);
              }
              break;
      case 3: printf("su saldo actual es: %.2f€\n", saldo);
              break;
      case 4: printf("Gracias por usar nuestro cajero\n");
              break;
      default: printf("Esta opción no es válida\n");
               break;
    }
  } while(opcion != 4);

  return 0;
}
