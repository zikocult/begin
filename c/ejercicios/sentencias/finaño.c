// Calcular el precio final si:
// Honda tiene un descuento del 5%
// Yamaha del 8%
// Suzuki del 10%
// El resto de marcas 2%

#include <stdio.h>
// #include <string.h>

int main (int argc, char *argv[])
{
//  char marca[20];
  int opcion;
  float precio, precioFinal;

  // fgets(marca, 20, stdin);
  // strtok(marca, "\n")
  // 
  // Per fer-h0 amb strings ara tindriem que comparar i treure la opció a on validar, es a dir, convertir la marca en una opció numérica per anar al switch, tal que:
  // if(strcmp(marca, "honda")=0){ opcion=1; }
  // if(strcmp(marca, "yamaha")=0){ opcion=2; }
  // ETC.....
  // deixo tan la llibreria com la definició de variables i la inicialització comentades
  //

  printf("Introduzca el precio de la moto aquí: ");
  scanf("%f", &precio);
  printf("\n");
  printf("Escriba la opción correspondiente a su moto\n");
  printf("1) Honda\n");
  printf("2) Yamaha\n");
  printf("3) Suzuki\n");
  printf("4) Otra marca\n");
  printf("Escriba su opción aquí: ");
  scanf("%i", &opcion);

  switch (opcion) {
    case 1: //Honda
      precioFinal = precio*0.95;
      break;
    case 2: //Yamaha
      precioFinal = precio*0.92;
      break;
    case 3: //Suzuki
      precioFinal = precio*0.9;
      break;
    case 4: //Otra marca
      precioFinal = precio*0.98; 
      break;
  }

  printf("El precio final de la monto es %.2f €\n", precioFinal);

  return 0;
}
