#include <stdio.h>

int main(int argc, char *argv[]) {
  int w = 10, x = 20, y = 30, z = 40, r1, r2, r3;
  int *p1, *p2, *p3, *p4;

  p1 = &w;
  p2 = &x;
  p3 = &y;
  p4 = p1;
  r1 = *p1 + *p2;
  r2 = (*p3) * (*p4);
  r3 = *p2 + *p3;

  printf("Los resultados son: %d, %d, %d\n", r1, r2, r3);

  printf("\n");
  printf("Esto viene de arriba, cuando hemos igualado P1 a P4\n");
  printf("P1 = %p, P4 = %p\n", p1, p4);
  printf("Al asignar P1 a Z, cambiamos el apunte de memoria de P1 siendo "
         "entonces P1 diferente de P4\n");
  p1 = &z;
  printf("P1 = %p, P4 = %p\n", p1, p4);
  printf("Lo volvemos a igualar, teniendo en la misma posición de memoria a "
         "P1, P4 y Z\n");
  p4 = p1;
  printf("Al ser P1 = Z, el valor es %d\n", z);
  printf("P1 = %p, P4 = %p\n", p1, p4);
  *p4 = 20;
  printf("Cambiando P4, he cambiado el valor de Z a %d\n", z);

  return 0;
}
