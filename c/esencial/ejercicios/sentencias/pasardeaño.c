//Ver si un alumno puede pasar de año
//Un alumno no puede suspender mas de 3 asignaturas para pasar de año

#include <stdio.h>

int main (int argc, char *argv[])
{
  int suspenso;
  
  printf("Cuantas asigrnaturas has cateado?\n");
  scanf("%i", &suspenso);
  
  if (suspenso > 3) {
    printf("Tu no pasas, repites\n");   
  } else {
    printf("Puedes pasar\n");
  }

  return 0;
}
