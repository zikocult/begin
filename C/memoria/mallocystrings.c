#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char *p_nombre, *p_nombre_completo;

  p_nombre = (char *)malloc(10 * sizeof(char));

  strcpy(p_nombre, "Guillem");
  printf("Nombre: %s\n", p_nombre);

  // Ampliando cadena de caracteres
  p_nombre_completo = (char *)realloc(p_nombre, 30 * sizeof(char));
  strcat(p_nombre_completo, " Barulls Casadesus");

  printf("Nombre: %s\n", p_nombre_completo);
  printf("La longitud de la frase es = %d\n", (int)strlen(p_nombre_completo));

  // Podemos reasignar malloc con strlen
  p_nombre_completo = (char *)realloc(
      p_nombre_completo, (strlen(p_nombre_completo) + 1) * sizeof(char));
  printf("Nombre reasignado otra vez : %s\n", p_nombre_completo);

  free(p_nombre_completo);
  return (0);
}
