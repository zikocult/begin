#include <stdio.h>

int main (int argc, char *argv[])
{
  
  char nombre[40];
  int salario;
  float aumentosalario;

  printf("Inserte su nombre\n");
  gets(nombre);
  printf("Inserte su salario\n");
  scanf("%i", &salario);

  aumentosalario=(salario*1.1);
  printf("Felicidades %s tu salario ahora es %.2f \n", nombre, aumentosalario);

  return 0;
}
