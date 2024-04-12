/*Hacer un arreglo de estructura llamada atleta para N atletas
que contenga los siguientes miembros:
nombre, pais, numero_medallas y devuelva los datos (nombre, pais)
del atleta que ha ganado el mayor número de medallas*/

#include <stdio.h>
#include <string.h>

struct Atleta {
  char nombre[30];
  char pais[30];
  int numero_medallas;
};

int main(int argc, char const *argv[]) {
  struct Atleta atletas[100];
  int numeroatletas, medallas = 0;
  char limpia;

  printf("Introduzca el número de atletas: ");
  scanf("%d", &numeroatletas);

  for (int i = 0; i < numeroatletas; i++) {
    limpia = getchar();
    printf("\nEscriba el nombre del atleta %d: ", i + 1);
    fgets(atletas[i].nombre, 30, stdin);
    strtok(atletas[i].nombre, "\n");

    printf("Escriba el pais del atleta %d: ", i + 1);
    fgets(atletas[i].pais, 30, stdin);
    strtok(atletas[i].pais, "\n");

    printf("Escriba el numero de medallas del atleta %d: ", i + 1);
    scanf("%i", &atletas[i].numero_medallas);
  }

  for (int i = 0; i < (numeroatletas - 1); i++) {
    if (atletas[i].numero_medallas < atletas[i + 1].numero_medallas) {
      medallas = i + 1;
    }
  }

  printf("\nEl atleta con mas medallas es %s, del pais %s, con %i medallas\n",
         atletas[medallas].nombre, atletas[medallas].pais,
         atletas[medallas].numero_medallas);

  return 0;
}
