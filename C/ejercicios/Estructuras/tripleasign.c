#include <stdio.h>

/*Aquí he creat una estructura de 30 alumnes, cadascú amb una asignatura / nota
 * i una direcció completa personalitzada per a cada usuari Lógicament cada
 * usuari té el seu nom i edad.
 * S'han assignat 4 asignatures per a fer-ho una
 * mica real.
 * Tota aquesta estructura, la incloc dins de una altre estructura mes gran com
 * es el colegi en si
 */

struct asignatura {
  char asignatura[30];
  int nota;
};

struct direccion {
  char calle[30];
  int numero;
  char ciudad[30];
  char provincia[30];
  int cp;
};

struct alumno {
  char nombre[30];
  int edad;
  struct asignatura asign1, asign2, asign3, asign4;
  struct direccion dire;
};

struct colegio {
  int curso;
  char clase[10];
  struct alumno alu[30];
};

int main(int argc, char *argv[]) {
  struct colegio cole[30];

  printf("Introduzca a asignatura\n");
  fgets(cole[0].alu[0].asign1.asignatura, 30, stdin);
  fgets(cole[0].alu[0].dire.calle, 30, stdin);
  // fgets(cole[0].alu.asign1.asignatura, 30, stdin);
  printf("Introduzca la nota de la asignatura\n");
  scanf("%i", &cole[0].alu[0].asign1.nota);
  printf("Posarem un exemple de com pillar algo de direcció, però es rutina\n");
  fgets(cole[0].alu[0].dire.calle, 30, stdin);
  scanf("%i", &cole[0].alu[0].dire.numero);
  // Y UN LARGO ETC.....

  return 0;
}
