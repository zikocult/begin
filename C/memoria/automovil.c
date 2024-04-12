/*
Diseña un tipo abstracto de dato llamado Automovil en el cual puedas encapsular
los elementos marca, modelo, color, tipo de auto

Elabora un programa el cuel es incluya la definicion de tu tipo abstracto de
dato y utilizando memoria dinamica, crea un arreglo dinámico de automóviles en
el cual e solicite al usuario en tiempo de ejecución, el tamaño de dicho
arreglo.

Dentro de la función principal del programa, el usuario deberá indicar y llenar
el número de automóviles determinando el tamaño del arreglo.

Recuerda que es recomendable el uso de funciones para trabajar con
implementaciones de tipo abstracto de dato.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Automovil {
  char marca[30];
  char modelo[30];
  char color[30];
  char tipo_de_auto[30];
} Automovil;

static void limpiar(void) {
  char c = getchar();
  while (c != EOF && c != '\n')
    c = getchar();
}

static void imprimirdatos(int cantidad, Automovil *carros) {
  for (int i = 0; i < cantidad; i++) {
    printf("Marca coche [%d]: %s \n", cantidad, carros[i].marca);
    printf("Modelo coche [%d]: %s \n", cantidad, carros[i].modelo);
    printf("Color coche [%d]: %s \n", cantidad, carros[i].color);
    printf("Tipo de coche [%d]: %s \n", cantidad, carros[i].tipo_de_auto);
    printf("\n");
  }
}

static void llenarcarroscreados(int cantidad, Automovil *carros) {
  printf("\n");
  for (int i = 0; i < cantidad; i++) {
    printf("Marca coche [%d]: ", i + 1);
    fflush(stdin);
    fgets(carros[i].marca, 30, stdin);
    strtok(carros[i].marca, "\n");

    printf("Modelo coche [%d]: ", i + 1);
    fflush(stdin);
    fgets(carros[i].modelo, 30, stdin);
    strtok(carros[i].modelo, "\n");

    printf("Color coche [%d]: ", i + 1);
    fflush(stdin);
    fgets(carros[i].color, 30, stdin);
    strtok(carros[i].color, "\n");

    printf("Tipo de coche [%d]: ", i + 1);
    fflush(stdin);
    fgets(carros[i].tipo_de_auto, 30, stdin);
    strtok(carros[i].tipo_de_auto, "\n");

    printf("\n");
  }
}

int main(void) {
  int cantidadautos;

  printf("Dime cuantos autos quieres crear: ");
  scanf("%d", &cantidadautos);

  Automovil *carros = (Automovil *)calloc(cantidadautos, sizeof(Automovil));
  limpiar();
  llenarcarroscreados(cantidadautos, carros);
  printf("**************************************************************\n\n");
  imprimirdatos(cantidadautos, carros);

  // Tenint les funcions podriem arribar a fer un menú amb el que vol fer
  // l'usuari: introduir cotxes, modificar, llistar, etc....

  free(carros);
  return (0);
}
