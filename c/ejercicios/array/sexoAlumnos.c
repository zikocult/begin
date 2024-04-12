/*Realice un programa que lea en un array el sexo de los N estudiantes del curso
 * de Algoritmos y que determine cuantos hombres y cuantas mujeres se encuentran
 * en el grupo, suponiendo que los datos son extraidos alumno por alumno*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  int totalAlumnos, hombre = 0, mujer = 0, indefinido = 0;
  char alumnos[30];

  printf("Intrese el total de alumnos: ");
  scanf("%d", &totalAlumnos);
  printf("\n");
  fgets(alumnos, 30, stdin);

  for (int i = 0; i < totalAlumnos; i++) {
    printf("Ingrese el sexo del alumno %d: \n", i + 1);
    fgets(alumnos, 30, stdin);
    strtok(alumnos, "\n");

    if (strcmp(alumnos, "hombre") == 0) {
      hombre++;
    } else if (strcmp(alumnos, "mujer") == 0) {
      mujer++;
    } else {
      indefinido++;
    }
  }

  printf("Total de hombres es = %d\n", hombre);
  printf("Total de mujeres es = %d\n", mujer);
  printf("Total de indeterminados es = %d\n", indefinido);

  return 0;
}
