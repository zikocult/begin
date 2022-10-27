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

  // Es pot fer amb un sol FOR, primer omplirà les files i després anirà baixant
  // per les columnes. El total serà de a * b en un array [a][b], en el cas de
  // hola, serien 20 (5*4)

  // DONCS NO FUNCIONA!!!!!!! era d'esperar
  //
  // for (i = 0; i < 20; i++) {
  //   hola[i] = 8;
  //   printf("%i \n", hola[i]);
  // }

  // A mi per això em sembla mes gràfic i fàcil de trobar apuntant les dos
  // dimensions, vaig a fer un parell d'exemples

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      hola[i][j] = m;
      m++;
    }
  }

  // Podria haver posat el print a la part interior del bucle d'inicialització,
  // però ho separo per a que sigui mes visual i per a posar els espais
  printf("Array bidimensional de 5 x 4: \n\n");

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      printf("%i ", hola[i][j]);
    }
    printf("\n");
  }

  int tridimensional[3][3][4];
  // Aquí ja tenim 3 dimensions les files i columnes son 3 i 4, la profunditat
  // seria el 2

  m = 1;
  printf("\n");
  printf("--------------------------------------------------------\n");
  printf("Array tridimensional de 3 x 3 x 4: \n\n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 4; k++) {
        tridimensional[i][j][k] = m;
        m++;
      }
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 4; k++) {
        printf("%i ", tridimensional[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  // Es pot fer amb tantes dimenions com volguem, p.e "array[1][2][3][4][5];"

  return 0;
}
