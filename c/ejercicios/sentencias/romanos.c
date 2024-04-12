// Pasar de número entero a número romano

#include "stdio.h"

int main (int argc, char *argv[])
{
  int numero, millar, centenas, decenas, unidades;
  printf("Introduce el número a convertir a romano, no puede ser superior a 3000\n"); 
  scanf("%i", &numero);

// Es va reduint el número poc a poc, s'agafa el residu i es va colocant a unitats, desenes, etc... deixant al final un /10 que redueix la expresió

  unidades = numero%10; numero = numero/10;
  decenas = numero%10; numero = numero/10;
  centenas = numero%10; numero = numero/10;
  millar = numero%10; numero = numero/10;

  if (millar <= 3) {
    switch (millar) {
      case 1: printf("M"); break;
      case 2: printf("MM"); break;
      case 3: printf("MMM"); break;
      default: printf("Te excediste en la numeración introducida\n");
    }

    switch (centenas) {
      case 1: printf("C"); break;
      case 2: printf("CC"); break;
      case 3: printf("CCC"); break;
      case 4: printf("CD"); break;
      case 5: printf("D"); break;
      case 6: printf("DC"); break;
      case 7: printf("DCC"); break;
      case 8: printf("DCCC"); break;
      case 9: printf("CM"); break;
      // default: break;
    }

    switch (decenas) {
      case 1: printf("X"); break;
      case 2: printf("XX"); break;
      case 3: printf("XXX"); break;
      case 4: printf("XL"); break;
      case 5: printf("L"); break;
      case 6: printf("LX"); break;
      case 7: printf("LXX"); break;
      case 8: printf("LXXX"); break;
      case 9: printf("XC"); break;
      // default: break;
    } 

    switch (unidades) {
      case 1: printf("I"); break;
      case 2: printf("II"); break;
      case 3: printf("III"); break;
      case 4: printf("IV"); break;
      case 5: printf("V"); break;
      case 6: printf("VI"); break;
      case 7: printf("VII"); break;
      case 8: printf("VIII"); break;
      case 9: printf("IX"); break;
    // default: break;
    }
    printf(" \n");
  } else {
     printf("Te excediste en la numeración introducida\n");
    }

  return 0;
}
