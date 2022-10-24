#include <stdio.h>
#include <math.h>

int main(){

  // Esto es para un triangulo
  
  float base, altura, area;

  printf("Este programa calcula el area de un triangulo\n");
  printf("Introduce la altura del triangulo\n");
  scanf("%f", &altura);
  printf("Introduce la base del triangulo\n");
  scanf("%f", &base);

  area = (base*altura)/2;
  printf("El area del triangulo es %.2f cm cuadrados \n", area);

  // Ahora vamos a por el cuadrado
  // Aprovecho la variable base y area definidos para el triangulo, no es necesario volver a difinir dentro de esta función
 
  base, area = 0;  

  printf("Este programa calcula el area de un cuadrado\n");
  printf("Introduce el base del cuadrado\n");
  scanf("%f", &base);

  //  area=base*base;
  area=pow(base,2);
  printf("El area del cuadrado es %.2f cm cuadrados\n", area);

  return 0;
}
