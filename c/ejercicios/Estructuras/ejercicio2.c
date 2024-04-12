/*Creación de un arreglo de estructuras

Crear la estructura asignatura
Agregar a la estructura alumno un arreglo de asignatura (5)
Iniciarlizar alumnos (2) con sus respectivas materias (3)
Permitir al usuario ver las materias
Permitir al usuario modificarlas
Permitir al usuario crear alumnos con sus materias desde cero
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef struct Asignatura
{
  char Materia[30];
} Asignaturas;

typedef struct alumno
{
  struct Asignatura Asignaturas[5];
} alumno;

void VerMateria(struct alumno);
void ModificarMateria(
    alumno *AlumnoModificacion); // El * es per apuntar a memoria, vigilar com
                                 // s'envia i que s'ha de passar amb una fletxa
                                 // quan cridem a la estructura
void CreaUsuario(
    struct alumno *AlumnoCreacion); // Si no es posa el * no fa la modificació

int main(int argc, char const *argv[])
{
  bool exit = 0;
  alumno Guillem, Jorge,
      AlumnoNuevo; // Això substitueix a "struct alumno Guillem, Jorge;"
  char nuevo[30] = "Alumno Vacío";
  int opcion;

  strcpy(Guillem.Asignaturas[0].Materia, "Matematicas");
  strcpy(Guillem.Asignaturas[1].Materia, "Física");
  strcpy(Guillem.Asignaturas[2].Materia, "Química");

  strcpy(Jorge.Asignaturas[0].Materia, "Música");
  strcpy(Jorge.Asignaturas[1].Materia, "Inglés");
  strcpy(Jorge.Asignaturas[2].Materia, "Programación");

  do
  {
    printf("\n-----------------------------------------------------------------"
           "------------\n");
    printf("\nEste programa te permite ver las materias, Modificarlas y crear "
           "alumnos\n");
    printf("1)Ver las materias\n");
    printf("2)Modificar las materias\n");
    printf("3)Crear alumno y sus materias\n");
    printf("0)Salir\n");
    printf("Escoja la opción deseada: ");
    printf("\n");

    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
      printf("\nSeleccionaste ver las materias\n");
      printf("De que alumno quieres ver las materias\n");
      printf("1) Guillem\n2) Jorge\n3) %s", nuevo);
      scanf("%d", &opcion);
      switch (opcion)
      {
      case 1:
        printf("\nSeleccionaste a Guillem\n");
        VerMateria(Guillem);
        break;
      case 2:
        printf("\nSeleccionaste a Jorge\n");
        VerMateria(Jorge);
        break;
      case 3:
        printf("\nSeleccionaste a AlumnoNuevo\n");
        VerMateria(AlumnoNuevo);
        break;
      default:
        printf("No sellecionaste una opción valida");
        break;
      }
      break;
    case 2:
      printf("Seleccionaste Modificar las Materias\n");
      printf("De que alumno quieres modificar las materias?\n");
      printf("1) Guillem\n2) Jorge\n3) %s\n\nSu opcion:", nuevo);
      scanf("%d", &opcion);
      switch (opcion)
      {
      case 1:
        printf("Seleccionaste a Guillem\n");
        ModificarMateria(&Guillem);
        break;
      case 2:
        printf("Seleccionaste a Jorge\n");
        ModificarMateria(&Jorge);
        break;
      case 3:
        printf("Seleccionaste a Jorge\n");
        ModificarMateria(&AlumnoNuevo);
        break;
      default:
        printf("Error al introducir\n");
        break;
      };
      break;
    case 3:
      printf("Seleccionaste alta nueva de usuario\nEscribe el nombre del nuevo "
             "usuario: ");
      fgets(nuevo, 30, stdin);
      fgets(nuevo, 30, stdin);
      strtok(nuevo, "\n");
      CreaUsuario(&AlumnoNuevo);
      break;
    case 0:
      printf("Adios\n");
      exit = 1;
      break;
    default:
      printf("Opcion erronea!\n");
      break;
    }
  } while (exit == 0);
  return 0;
}

void VerMateria(struct alumno alumno)
{
  printf("Sus mmaterias son: \n1) %s\n2) %s\n3) %s\n",
         alumno.Asignaturas[0].Materia, alumno.Asignaturas[1].Materia,
         alumno.Asignaturas[2].Materia);
}

void ModificarMateria(alumno *AlumnoModificacion)
{
  int materia;
  char nueva[30];
  printf("\nSelecciona cual de sus materias quieres modificar: \n1)%s\n2) "
         "%s\n3) %s\n",
         AlumnoModificacion->Asignaturas[0].Materia,
         AlumnoModificacion->Asignaturas[1].Materia,
         AlumnoModificacion->Asignaturas[2].Materia);
  printf("Su opción es: ");
  scanf("%i", &materia);

  printf("\nEscriba la nueva materia: ");
  fgets(nueva, 30, stdin);
  fgets(nueva, 30, stdin);
  strtok(nueva, "\n");
  strcpy(AlumnoModificacion->Asignaturas[materia - 1].Materia, nueva);
  printf("\nLa nueva materia: %s",
         AlumnoModificacion->Asignaturas[materia - 1].Materia);
}

void CreaUsuario(struct alumno *AlumnoCreacion)
{
  printf("Introduzca la primera asignaturas que va a cursar: ");
  fgets(AlumnoCreacion->Asignaturas[0].Materia, 30, stdin);
  strtok(AlumnoCreacion->Asignaturas[0].Materia, "\n");

  printf("Introduzca la segunda asignaturas que va a cursar: ");
  fgets(AlumnoCreacion->Asignaturas[1].Materia, 30, stdin);
  strtok(AlumnoCreacion->Asignaturas[1].Materia, "\n");
  printf("Introduzca la tercera asignaturas que va a cursar: ");

  fgets(AlumnoCreacion->Asignaturas[2].Materia, 30, stdin);
  strtok(AlumnoCreacion->Asignaturas[2].Materia, "\n");
  printf("%s, %s, %s", AlumnoCreacion->Asignaturas[0].Materia,
         AlumnoCreacion->Asignaturas[1].Materia,
         AlumnoCreacion->Asignaturas[2].Materia);
}
