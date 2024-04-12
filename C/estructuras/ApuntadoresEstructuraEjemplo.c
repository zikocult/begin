/*
 * Crear una estructura usando typedef llamada persona y crear una instancia de
 * ella llamada cliente que contenga edad, dinero y nombre Cambiar esos datos
 * usando las diferentes sintaxis de los apuntadores a estructura
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct persona {
  int edad;
  float dinero;
  char nombre[20];
} cliente;

int main(void) {
  // Vaig a posar la versió curta, però per a classe s'ha d'allargar
  // cliente Juan, *pJuan = &Juan;
  cliente Juan;
  cliente *pJuan;

  pJuan = &Juan;
  Juan.edad = 20;
  printf("El valor de la edad de Juan es de %d\n", Juan.edad);
  //es pot posar de les dos maneres, amb fletxa o com abaix, mola mes ->
  (*pJuan).edad = 30;
  printf("El valor de la edad de Juan es de %d\n", (*pJuan).edad);
  pJuan->edad = 50;
  printf("El valor de la edad de Juan es de %d\n", pJuan->edad);

  return EXIT_SUCCESS;
}
