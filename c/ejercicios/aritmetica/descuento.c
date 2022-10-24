#include <stdio.h>
#include <math.h>

// calcular el descuento y lo descontado en un 15% de descuento

int main()
{

  float base, descontado, descuento;

  printf("Introduce el precion original del producto\n");
  scanf("%f", &base);

  //descuento = (base*15)/100;
  descuento = base * 0.15;
  descontado= base - descuento;

  printf("El descuento del producto es %.2f \n",descuento);
  printf("El precio final del producto es %.2f \n",descontado);
  
  return 0;
}
