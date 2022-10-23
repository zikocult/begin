#include <stdio.h>
#include <string.h>

int main() {
  char Origen[] = "Programación";
  // Dado que programacion tiene 12 caracteres
  // Creamos el array destino de la misma dimension
  char Destino[12];

  // Copiamos el contenido y lo mostramos
  strcpy(Destino, Origen);
  printf("%s\n", Destino);

  // Así copia el valor entre comillas, no la var
  strcpy(Destino, "Origen");
  printf("%s\n", Destino);

  //* strcat(Destino, Fuente)
  //* Concatena (agrega) la cadena fuente en el destino. Debes considerar que la
  // cadena destino
  //* debe tener un tamaño tal que pueda albergar la cadena resultante.

  char Cadena1[] = "Guillem", Cadena2[] = "Barulls";
  char Final[50];

  // Concatenamos, siempre se agrega al final, con lo que haremos tres pasos
  strcat(Final, Cadena1);
  strcat(Final, " ");
  strcat(Final, Cadena2);
  printf("%s\n", Final);

  // Añdo el fgets y el strtok al ejemplo total
  // fgets captura string (variable, tamaño, metodo entrada)
  // strtok elimina a partir de un carácter determinado de la cadena
  char nombre[20];
  printf("Introduzca el nombre Guillem: ");
  fgets(nombre, 20, stdin);
  strtok(nombre, "e");
  printf("%s\n", nombre);

  /*strcmp(cadena1, cadena2)
   * compara dos cadenas de texto caracter a caracter, es case-sensitive.
   * cuando encuentra una diferencia, esta función devuelve un valor entero
   * correspondiente a la diferencia de valor decimal según el código ASCII.
   * El cual corresponde a la siguiente tabla.
   *
   * Si cadena1 es      Entonces devuelve
   * Igual que cadena2      0
   * Mayor que cadena2      n > 0
   * Menor que cadena2      n < 0    */

  char ClaveSecreta[] = "a";
  int intentos = 3;
  char UsuarioDigito[128];

  do {
    printf("escriba la clave secreta\n");
    // fflush(stdin);
    // scanf("%s", &UsuarioDigito);
    fgets(UsuarioDigito, 128, stdin);
    strtok(UsuarioDigito, "\n");

    // Amb Fgets tenim que treure el intro, desde scanf no fa falta amb fflush

    if (strcmp(ClaveSecreta, UsuarioDigito) == 0) {
      printf("Bienvenido al sistema\n");
      break;
    } else {
      intentos--;
      printf("Clave secreta incorrecta, le quedan %i intentos\n", intentos);
    }
  } while (intentos > 0);

  // strlen(cadena)
  // Devuelve un entero que representa la longitud de una cadena de texto
  // (incluyendo espacios en blanco, pero excluyendo el caracter nulo)
  // El caracter nulo es todo lo que va detrás de \ p.e \n

  char array[200];
  int contaje;
  printf("Escribe cualquier cosa\n");
  fgets(array, 200, stdin);
  strtok(array, "\n");
  // A diferencia que amb Scanf, Fgets sempre pilla el intro i s'ha de borrar

  contaje = strlen(array);
  printf("La longitud de la cadena digita es: %i\n", contaje);

  /*strlwr(cadena)
   * convierte a minusculas todas las letras de una cadena    */

  char texto[100];
  printf("Escribe un texto con mayúsculas y minúsculas para convertir\n");
  fgets(texto, 100, stdin);
  printf("%s\n", strlwr(texto));

  // strupr(cadena)
  // Convierte a mayúsculas todas las letras de una cadena

  char texto2[100];
  printf("Escribe un texto con mayúsculas y minúsculas para convertir\n");
  fgets(texto2, 100, stdin);
  printf("%s\n", strupr(texto2));

  // Estas dos últimas funciones están obsoletas, con lo que debido añadir el
  // siguiente código a string.h Hay que incluir en <string.h> la libreria
  // <ctype.h>
  //
  // #include <ctype.h>
  //
  // char *strlwr(char *str)
  // {
  //   unsigned char *p = (unsigned char *)str;
  //   while (*p) {
  //      *p = tolower((unsigned char)*p);
  //       p++;
  //   }
  //   return str;
  // }

  // char *strupr(char *str)
  // {
  //   unsigned char *p = (unsigned char *)str;
  //   while (*p) {
  //      *p = toupper((unsigned char)*p);
  //       p++;
  //   }
  //   return str;
  // }

  // strrchr(Cadena, caracter)
  // Regresa el restante de la cadena a partir de la primera aparición del
  // carácter indicado

  char Abecedario[] = "abcdefghijklmnopqrstuvwxyz";

  printf("Abecedario sin cortes %s ", Abecedario);
  printf("El abecedario se cortará en la letra M %s: \n",
         strchr(Abecedario, 'm'));

  // strrev()
  // Invierte una cadena

  char Hola[] = "Que te den mamon";
  strrev(Hola);
  printf("Cadena Invertida: %s\n", Hola);

  // Este también se debe incluir a manopla
  // char *strrev(char *str)
  // {
  //       char *p1, *p2;
  //       if (! str || ! *str)
  //             return str;
  //       for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
  //       {
  //             *p1 ^= *p2;
  //             *p2 ^= *p1;
  //             *p1 ^= *p2;
  //       }
  //       return str;
  // }

  return 0;
}
