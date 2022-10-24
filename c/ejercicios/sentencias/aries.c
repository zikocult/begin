#include <stdio.h>
#include <string.h>// es pel strcmp (string compare) i el strtok (per elminar caracters dins una string)

// Así no funciona por problemas con el string
//
// int main (int argc, char *argv[])
// {
//   char nombre[20], signo[20];
//   printf("Escriba su nombre y su signo\n");
//   scanf("%c %c", &nombre, &signo);
//   
//   if (signo = "Aries") {
//     printf("Su nombre es: %c\n", nombre);
//   } else {
//     printf("Su signo no es Aries\n");
//   }
//
//   return 0;
// }

int main ()
{
  char nombre[20], signo[20];
  printf ("Escribe tu nombre\n");
  fgets(nombre,20,stdin); // fgets se forma con (nombre variable, máximo número caracteres, método entrada)
  strtok(nombre, "\n"); //strtok sirve para eliminar caracteres indeseados, en este caso el intro al introducir el nombre

  printf("Introduzca su signo\n");
  fgets(signo,20,stdin);
  strtok(signo, "\n"); // El ús es (nom variable, carácter a eliminar)

  if (strcmp(signo, "aries")==0) {
    printf("su nombre es %s\n", nombre);
  } else if (strcmp(signo, "Aries")==0) {
    printf("su nombre es %s\n", nombre);
  } else {
    printf("tu no eres aries\n");
  }

  // strcmp retorna valor 0 si la variable enmagatzemada es igual al asignat

  return 0;
}
