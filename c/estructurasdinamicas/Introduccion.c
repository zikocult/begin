
#include <stdio.h>
#include <stdlib.h>

// Cada registro estatica utiliza 26 bytes
// Un array de 100 personas ocupara 2600 bytes en memoria

typedef struct estatica {
  int dni;         // 2 bytes
  char nombre[20]; // 20 bytes
  long fechaNac;   // 4 bytes
} Persona;

// ******************************************************************
// Estructura que define valores mas una referencia que es un apuntador de tipo
// Nodo (Nodo*) para apuntar al siguiente nodo de la colección
// Se puede alojar en diferentes zonas de la memoria

typedef struct dinamica {
  int valor;        // Valor que contiene el NODO
  struct Nodo *sig; // Referencia al siguiente NODO
} Nodo;

int main(void) {
  printf("Esto sólo son apuntes de estructuras, avanzando las dinámicas\n");
  return EXIT_SUCCESS;
}

// ******************************************************************
// Estructuras de datos dinámicas LINEALES
//
// Cada elemento de la colección tiene un único elemento anterior y único
// elemento superior (excepto el primero y el último)
//
// Como Pila (Stack) y la cola (Queue)
//
// ******************************************************************
// Estructuras de datos dinámicas NO LINEALES
//
// Ejemplo (Árboles)
//
// Árboles binarios:
// Tienen un único elemento anterior (excepto el primero)
// Pero pueden tener hasta 2 posteriores
//
// ******************************************************************
