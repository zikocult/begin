// Hacer una estructura llamada alumno, en la cual se tendran los siguientes miembros:
// Nombre, edad, promedio.
// Pedir datos al usuario para los 3 alumnos.
// Comprobar cual tiene mejor promedio y posteriormente imprimir los datos del  alumno

#include <stdio.h>
#include <string.h>

struct alumno
{
  char Nombre[30];
  int edad;
  float promedio;
} alumno[3];

// Solució trobada a internet per evitar el problema entre scanf i fgets
// També treu l'error de no està usant una variable.
// No es pot treure el do o torna a donar l'error

void consumirNuevaLinea(void)
{
  int c;
  do
  {
    c = getchar();
  } while (c != EOF && c != '\n');
}

int main(int argc, char *argv[])
{
  int prom = 0;
  // char limpia;

  for (int i = 0; i < 3; i++)
  {

    printf("Introducir nombre del alumno %i: ", (i + 1));
    fgets(alumno[i].Nombre, 30, stdin);
    strtok(alumno[i].Nombre, "\n");

    printf("Introducir la edad del alumno %i: ", (i + 1));
    scanf("%i", &alumno[i].edad);

    printf("Introducir el promedio del alumno %i: ", (i + 1));
    scanf("%f", &alumno[i].promedio);

    printf("\n");
    consumirNuevaLinea();
  }

  for (int i = 0; i < 2; i++)
  {
    if (alumno[i + 1].promedio > alumno[i].promedio)
    {
      prom = i + 1;
    }
  }

  printf("\nEl alumno con mejor promedio es %s, con un promedio de %.2f y una edad de %i\n", alumno[prom].Nombre, alumno[prom].promedio, alumno[prom].edad);

  return 0;
}

// Manera guarra de obtenir el major, però se m'ha ocurregut la del FOR que he deixat abaix

// if (alumno[0].promedio > alumno[1].promedio) {
//   if (alumno[0].promedio > alumno[2].promedio) {
//     prom = 0;
//   } else {
//     prom = 2;
//   }
// } else {
//   if (alumno[1].promedio > alumno[2].promedio) {
//     prom = 1;
//   } else {
//     prom = 2;
//   }
// }