#include <stdio.h>
#include <string.h>

struct infoDireccion
{
  char direccion[60];
  char ciudad[20];
  char provincia[20];
};
struct empleado
{
  char nombre[30];
  struct infoDireccion dirempleado;
  float salario;
} empleados[2];

int main(int argc, char *argv[])
{
  // char limpia;

  for (int i = 0; i < 2; i++)
  {

    printf("%i) Escriba su nombre: ", (i + 1));
    fgets(empleados[i].nombre, 20, stdin);
    strtok(empleados[i].nombre, "\n");

    printf("%i) Escriba su dirección: ", (i + 1));
    fgets(empleados[i].dirempleado.direccion, 30, stdin);
    strtok(empleados[i].dirempleado.direccion, "\n");

    printf("%i) Escriba su ciudad: ", (i + 1));
    fgets(empleados[i].dirempleado.ciudad, 20, stdin);
    strtok(empleados[i].dirempleado.ciudad, "\n");

    printf("%i) Escriba su provincia: ", (i + 1));
    fgets(empleados[i].dirempleado.provincia, 20, stdin);
    strtok(empleados[i].dirempleado.provincia, "\n");

    printf("%i) Escriba su salario: ", (i + 1));
    scanf("%f", &empleados[i].salario);

    printf("\n");
    // limpia = getchar();
    fgets(empleados[i].nombre, 20, stdin);
  }

  for (int i = 0; i < 2; i++)
  {
    printf("\n\nDatos del empleado numero %i: ", (i + 1));
    printf("\nNombre: %s", empleados[i].nombre);
    printf("\nDirección: %s", empleados[i].dirempleado.direccion);
    printf("\nCiudad: %s", empleados[i].dirempleado.ciudad);
    printf("\nProvincia: %s", empleados[i].dirempleado.provincia);
    printf("\nSalario: %.2f", empleados[i].salario);
    printf("\n");
  }

  return 0;
}
