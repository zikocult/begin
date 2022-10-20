/* Comprobar a traves de un programa si un alumno aprobo o no
 * Se aprueba si su nota es mayor que 5.5
 */

#include <stdio.h>

int main (int argc, char *argv[])
{
  float calificacion;
  printf("Escribe la calificación de tu examen\n");
  scanf("%f", &calificacion);

  if (calificacion > 5.5) {
    printf("aprobaste\n");    
  } else {
    printf("suspendiste\n");
  }

  return 0;
}
