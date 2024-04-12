// Esta función sólo sirve para evitar el problema que hay entre
// SCANF y FGETS, el primero consume el intro del siguiente, saltando
// uno de los FGETS.
// Importante ponerlo después de que el usuario introduzaca un intro

#include <stdio.h>

void consumirNuevaLinea(void) {
  int c;
  do {
    c = getchar();
  } while (c != EOF && c != '\n');

  // Amb el while s'ha d'iniciar abans la C, per això millor amb el do, però les
  // dues serveixen:
  //
  //  int c = getchar();
  //
  //  while (c != EOF && c != '\n')
  //    c = getchar();
}
