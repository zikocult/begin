#include <stdio.h>

float mediaaritmetica (float num1, float num2);

int main (int argc, char *argv[])
{
  float num1, num2;
  
  printf("Introduzca los dos números\n");
  scanf("%f %f", &num1, &num2);

  mediaaritmetica(num1, num2);
  printf("La media es de %.2f\n", mediaaritmetica(num1, num2));
  return 0;
}

float mediaaritmetica(float num1, float num2){
  return ((num1 + num2 )/2);
}
