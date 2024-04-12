#include <stdio.h>

int main (int argc, char *argv[])
{
  int dia;
  char vocal;

/*  printf("Selecciona un día de los días de la semana (1 al 7)\n");
  scanf("%i",&dia);

  switch (dia) {
    case 1: printf("Seleccionaste el lunes\n");      
      break;
    case 2: printf("Seleccionaste el martes\n");
      break;
    case 3: printf("Seleccionaste el miercoles\n");
      break;
    case 4: printf("Seleccionaste el jueves\n");
      break;
    case 5: printf("Seleccionaste el viernes\n");
      break;
    case 6: printf("Seleccionaste el sábado\n");
      break;
    case 7: printf("Seleccionaste el domingo\n");
      break;
    default: printf("Ninguna de las anteriores\n");
      break;
  }
*/
  
  printf("Introduzca una vocal\n");
  scanf("%c", &vocal);

  switch (vocal) {
    case 'a': printf("Seleccionaste la a\n");      
      break;
    case 'e': printf("Seleccionaste la e\n");
      break;
    case 'i': printf("Seleccionaste la i\n");
      break;
    case 'o': printf("Seleccionaste la o\n");
      break;
    case 'u': printf("Seleccionaste la u\n");
      break;
    default: printf("No has introducido una vocal\n");
      break;
  }
  
  return 0;
}
