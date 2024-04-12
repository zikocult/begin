#include <stdio.h>
#include <string.h>
struct persona
{
  char nombre[20];
  int edad;
} personas[5];

int main(int argc, char *argv[])
{
  int i;
  // char limpia;

  for (i = 0; i < 5; i++)
  {

    printf("%i. Escriba su nombre: ", (i + 1));
    fgets(personas[i].nombre, 20, stdin);
    strtok(personas[i].nombre, "\n");

    printf("%i. Escriba su edad: ", (i + 1));
    scanf("%i", &personas[i].edad);

    printf("\n");

    // limpia = getchar();
    fgets(personas[i].nombre, 20, stdin);
  }

  printf("----------------------------------------------------\n");

  for (i = 0; i < 5; i++)
  {
    printf("\n%i. Su nombre es: %s", (i + 1), personas[i].nombre);
    printf("%i. Su edad es: %i", (i + 1), personas[i].edad);
    printf("\n");
  }

  return 0;
}
