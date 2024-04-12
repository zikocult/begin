#include <stdio.h>

int main()
{

  float num2, num1, suma, resta, multiplicacion, division;

  printf("Escriba dos números\n");
  scanf("%f %f",&num1,&num2);

  suma = num1 + num2;
  resta = num1 - num2;
  multiplicacion = num1 * num2;
  division = num1 / num2;
  
  printf("La suma de los números es %.2f \nLa resta es %.2f \nLa multiplicación es %.2f \nLa división es %.2f\n", suma, resta, multiplicacion, division);
  printf("Gracias por usar  el programa\n");

  return 0;
}
