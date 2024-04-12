/*Hacer una estructura llamada corredor, en la cual se tendrán los siguientes
 * miembros: Nombre, edad, sexo, club Perdir datos al usuario para un corredor y
 * asignarle una categoría de competición:
 *  - Juvenil <=18
 *  - Senior <= 40
 *  - Veterano > 40
 *  Posteriormente imprimir todos los datos del corredor, incluida su categoria
 * de competición
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct corredor {
  char nombre[30];
  int edad;
  char sexo[10];
  char club[30];
  char categoria[30];
} corredores[10];

int main(int argc, char *argv[]) {

  int opc, cont = 0;
  bool exit = 0;
  char limpia;

  do {
    printf("Quiere seguir con otro corredor? Para seguir 1, para salir 0: ");
    scanf("%i", &opc);
    limpia=getchar();
    printf("\n");

    switch (opc) {
    case 0:
      exit = 1;
      break;

    case 1:
      printf("Introduzca el nombre: ");
      fgets(corredores[cont].nombre, 30, stdin);
      strtok(corredores[cont].nombre, "\n");

      printf("Introduzca la edad: ");
      scanf("%i", &corredores[cont].edad);
      limpia = getchar();

      printf("Introduzca el sexo: ");
      fgets(corredores[cont].sexo, 10, stdin);
      strtok(corredores[cont].sexo, "\n");

      printf("Introduzca el club: ");
      fgets(corredores[cont].club, 30, stdin);
      strtok(corredores[cont].club, "\n");

      if (corredores[cont].edad <= 18) {
        strcpy(corredores[cont].categoria, "Juvenil");
      } else if (corredores[cont].edad <= 40) {
        strcpy(corredores[cont].categoria, "Senior");
      } else {
        strcpy(corredores[cont].categoria, "Veterano");
      }
      printf("\n");
      break;

    default:
      break;
    }
    cont++;
  } while (cont < 10 && exit != 1);

  for (int i = 0; i < cont-1; i++) {
    printf("Corredor %i con nombre: %s\n", i + 1, corredores[i].nombre);
    printf("Corredor %i con edad: %i\n", i + 1, corredores[i].edad);
    printf("Corredor %i con sexo: %s\n", i + 1, corredores[i].sexo);
    printf("Corredor %i con club: %s\n", i + 1, corredores[i].club);
    printf("Corredor %i con categoria: %s\n", i + 1, corredores[i].categoria);
    printf("\n");
  }
  return 0;
}
