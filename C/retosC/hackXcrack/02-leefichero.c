#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char aux;
  FILE *f;

  f = fopen("prueba.txt", "r");
  if (f == NULL) {
    printf("No se ha podido abrir el fichero\n");
    return (1);
  }

  printf("--------- Mediante Char------------------- \n");
  while (aux != EOF) {
    aux = fgetc(f);
    printf("%c", aux);
  }

  fclose(f);

  printf("--------- Mediante String------------------- \n");
  char aux2[1024];
  f = fopen("prueba.txt", "r");
  if (f == NULL) {
    printf("No se ha podido abrir el fichero\n");
    return (1);
  }

  // Així em duplica la última linea
  // while (!feof(f)) { // Mentre NO (!) sigui End of File
  //   fgets(aux2, 1024, f);
  //   printf("%s", aux2);
  // }

  // Així evito la doble lectura del salt de linea
  while (fgets(aux2, 1024, f) != NULL) {
    printf("%s", aux2);
  }

  fclose(f);

  printf("--------- Mediando Malloc------------------- \n");

  char *aux3;
  aux3 = (char *)malloc(1024 * sizeof(char));

  f = fopen("prueba.txt", "r");
  if (f == NULL) {
    printf("No se ha podido abrir el fichero\n");
    return (1);
  }

  // Aquí tinc una altre manera de usar i que no es dupliqui la linea
  while (1) {
    fgets(aux2, 1024, f);
    if (feof(f))
      break;
    printf("%s", aux2);
  }

  fclose(f);
  free(aux3);

  printf("--------- Operando con el fichero------------ \n");

  char aux4[100];
  f = fopen("prueba2.txt", "w");
  fprintf(f, "1 2 3 ");
  fprintf(f, "4 5 \n");
  fclose(f);
  f = fopen("prueba2.txt", "r");
  if (f == NULL) {
    printf("No se ha podido abrir el fichero\n");
    return (1);
  }

  while (fgets(aux4, 100, f) != NULL) {
    printf("%s", aux4);
  }

  fclose(f);

  return 0;
}
