#include <stdio.h>
#include <string.h>

struct promedio {
  float nota1, nota2, nota3;
};

struct alumno {
  char nombre[20];
  char sexo[20];
  int edad;
  struct promedio prom;
};

int main(int argc, char *argv[]) {
  struct alumno alumno1;
  float promedio;

  printf("Ingrese el nombre del alumno: ");
  fgets(alumno1.nombre, 20, stdin);
  strtok(alumno1.nombre, "\n");

  printf("Ingrese el sexo del alumno: ");
  fgets(alumno1.sexo, 20, stdin);
  strtok(alumno1.sexo, "\n");

  printf("Ingrese la edad del alumno: ");
  scanf("%i", &alumno1.edad);
  // fflush();

  printf("Escribe las notas: ");
  scanf("%f %f %f", &alumno1.prom.nota1, &alumno1.prom.nota2,
        &alumno1.prom.nota3);

  promedio = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3;

  printf("El promedio de %s es igual a %.2f\n", alumno1.nombre, promedio);
  printf("El resto de datos son --> ");
  printf("sexo: %s", alumno1.sexo);
  printf(", edad: %i\n", alumno1.edad);

  return 0;
}
