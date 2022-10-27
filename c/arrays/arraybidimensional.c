/* tipoDeDato nombreDelArray [numeroFilas][numeroColumnas];

char pantalla[1920][1080]:

int puestos[6][8];

int tabla[2][3] = {1,2,3,4,5,6};
123
456

Filas (Hacia ABAJO)
Columnas (Hacia los LADOS)

int tabla [2][3] = {{1,2,3},{4,5,6}};

int tabla [0][0]=1
int tabla [0][1]=2
int tabla [0][2]=3
int tabla [1][0]=4
int tabla [1][1]=5
int tabla [1][2]=6
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  int i, j, k, m = 1, hola[5][4];

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      hola[i][j] = m;
      m++;
    }
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      printf("%i ", hola[i][j]);
    }
  }

  int tridimensional[2][3][4];
  // Aquí ja tenim 3 dimensions les files i columnes son 3 i 4, la profunditat
  // seria el 2

  m = 1;
  printf("\n");

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 4; k++) {
        tridimensional[i][j][k] = m;
        m++;
      }
    }
  }

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 4; k++) {
        printf("%i ", tridimensional[i][j][k]);
      }
    }
  }

  return 0;
}
