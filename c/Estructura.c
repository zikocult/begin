#include <stdio.h> //Librerías que tienen las funciones, esta sería la salidas y entradas standard "Standard input output"
/* Las librerías mas importantes serían (entre muchas):
#include <math.h>
#include <stdlib.h>
#include <string.h>
*/
#define PI 3.1416 // Definimos una Macro

// include y define no llevan el ; final

int y = 5; // Definición de una variable, en este caso global

int main()
{ // Definición función principal o main+

  int x = 10; // Definición de una variable local

  int Suma; // Declaramos variable, pero no le damos valor

  Suma = PI + x;

  printf("La Sumas es: %i\n", Suma); // Así evidentemente sólo sacará entero

  float Suma2 = 0; // Declaro de esta forma nueva variable de tipo real

  Suma2 = PI + x;

  printf("La Sumas es: %f\n",
         Suma2);                        // cambiamos el % por el tipo de valor que esperamos recibir
  printf("La Sumas es: %.3f\n", Suma2); // con el %.xf limitamos la cantidad de
                                        // decimales que sacará por pantalla

  return 0; // Comando para salir de la función
}
