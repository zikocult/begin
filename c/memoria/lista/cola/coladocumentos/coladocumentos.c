#include "coladocumentos.h"

int main(void) {
  int cantidadDocs;
  printf("\nCuantos documentos quieres registrar: ");
  fflush(stdin);
  scanf("%d", &cantidadDocs);
  printf("---------------------------------------------------------\n");

  Documento *apuntadoc = (Documento *)malloc(cantidadDocs * sizeof(Documento));
  Cola DocumentoCola = crearCola();

  for (int i = 0; i < cantidadDocs; i++) {
    consumirNuevaLinea();
    printf("\nEscribe el nombre del documento[%i]: ", i + 1);
    fflush(stdin);
    fgets(apuntadoc[i].nombre, 30, stdin);
    printf("Escribe el nombre del autor del documento[%i]: ", i + 1);
    fflush(stdin);
    fgets(apuntadoc[i].autor, 30, stdin);
    printf("Escribe el numero de páginas del documento[%i]: ", i + 1);
    fflush(stdin);
    scanf("%i", &apuntadoc[i].numeroPaginas);
    encolar(&DocumentoCola, apuntadoc[i]);
    printf("---------------------------------------------------------\n");
  }

  printf("***Iniciando la impresión***\n");
  float Total = 0.0;
  for (int i = 0; i < cantidadDocs; i++) {
    Documento ColaRegresada = desencolar(&DocumentoCola);
    printf("Nombre: %s", ColaRegresada.nombre);
    printf("Autor: %s", ColaRegresada.autor);
    float tiempoSegundos = (ColaRegresada.numeroPaginas) * 3;
    tiempoSegundos /= 60;
    printf("Tiempo de impresión (Minutos): %.2f\n\n", tiempoSegundos);
    Total += tiempoSegundos;
  }
  printf("Tiempo total impresión (Minutos): %.2f\n", Total);
  printf("***Finalizando la impresión***\n");

  free(apuntadoc);
  return EXIT_SUCCESS;
}
