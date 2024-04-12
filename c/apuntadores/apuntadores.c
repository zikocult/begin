// Mostrar el uso básico de los punteros
/*
    posiciones de memoria --
    punteros
*/

#include <stdio.h>

void apuntes(void) {
  int numero = 3;
  // imprimirà el valor de la variable
  printf("El valor de numero = %i\n", numero);
  // imprimirà la posició de memoria
  printf("Numero está guardado en la posición %p de memoria\n", &numero);
  // important el & quan juguem amb memòries

  int hola = 100;
  // Crearem un apuntador amb el *
  int *phola = &hola; // hem assignat hola a la posició de memoria de *phola
  /* Els apuntadors com es veu a dalt, s'inicien com:
        tipoDato *nombreApuntador;
    */
}

int main(int argc, char *argv[]) {

  apuntes();

  int numero = 50;
  int *pNumero;
  int *pNumero2 = &numero; // Aquesta es la manera mes habitual d'usar,però aquí
                           // no ho farem servir per a fer els exemples

  printf("\n");
  printf("Dato variable: %i\n", numero);
  printf("La posición de la variable no se mueve en toda la ejecución\n");
  printf("Posicion: %p\n", &numero);

  // Per assignar valors juguem com amb una variable, però no podem assignar el
  // valor directament
  printf("\n");
  printf("Posición del puntero no iniciado: %p\n", pNumero);

  *pNumero = 123;
  printf("Posiciones en memoria antes de iniciar\n");
  printf("Posicion variable: %p\n", &numero);
  printf("Posicion puntero iniciado manualmente: %p\n", pNumero);
  printf("Vemos que no cambia el puntero de posición de memoria\n");
  printf("El puntero cambiará de posición cuando asignemos una variable\n");

  pNumero = &numero; //&numero = posicion en memoria de numero

  printf("\n");
  printf("Valor contenido\n");
  printf("Dato variable: %i\n", numero);
  printf("Dato Puntero con 'numero': %i\n", *pNumero);

  printf("\n");
  printf("Posicion en memoria\n");
  printf("Posicion variable: %p\n", &numero);
  printf("Posicion puntero con 'numero': %p\n", pNumero);

  return 0;
}
