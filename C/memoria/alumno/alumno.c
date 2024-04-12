#include "alumno.h"

void llenarAlumno(Alumno *din);

int main(void) {

  Alumno *din1, *din2, *din3;

  din1 = (Alumno *)malloc(5 * sizeof(Alumno));
  din2 = (Alumno *)calloc(5, sizeof(Alumno));

  printf("Primer apuntador\n");
  for (int i = 0; i < 5; ++i) {
    printf("Direccion[%d] = %p\n", i, din1 + i);
  }
  printf("\n");

  printf("Segundo apuntador\n");
  for (int i = 0; i < 5; ++i) {
    printf("Direccion[%d] = %p\n", i, din2 + i);
  }
  printf("\n");

  llenarAlumno(din1);
  llenarAlumno(din2);

  printf("Con Realloc\n");
  din3 = (Alumno *)realloc(din2, 10 * sizeof(Alumno));
  for (int i = 0; i < 10; ++i) {
    printf("Direccion[%d] = %p\n", i, din3 + i);
  }
  printf("\n");


  free(din1);
  free(din3);

  system("PAUSE");
  return (0);
}
