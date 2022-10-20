#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int numero;

  printf("\nPrograma que borra la pantalla al pulsar el número 1");
  printf("-----------------------------------------------------\n");
  printf("1) para borrar la pantalla\n");
  printf("2) para listar el directorio actual\n");
  printf("3) ver que usuario soy\n");
  printf("El valor introducido es el: ");
  scanf("%i", &numero);

  // if (numero == 1) {
  //   system("clear"); // es necesari la llibreria stdlib.h
  //   printf("He borrado la pantalla exitosamente\n");
  // } else {
  //   printf("El número no es = 1\n");
  // }
  switch (numero) {
    case 1: system("clear"); break;
    case 2: system("ls -la"); break;
    case 3: system("whoami"); break;
    default: printf("Saliendo del programa\n"); break;
}

//Remember que per exemple a windows la ordre seria CLS i no CLEAR

  return 0;
}
