// 1 - Include th stdarg.h
// 2 - function(int fixedparam, ...)
// Los tres puntos indican que pueden entrar varios parametros
// 3 - Define a va_list variable
// 4 - begin and end the argu list with va_start and va_end
//
// Add (3, 1, 2, 3) --> indica que entrará tres variables y las variables en si

#include <stdarg.h>
#include <stdio.h>

int add(int args, ...) {
  va_list ap;
  // Aquí es donde definimos la lita de argumentos con el nombre ap

  va_start(ap, args);
  // El proceso se inicia desde aquí
  int i = 0, sum = 0;
  for (i = 0; i < args; i++)
    sum += va_arg(ap, int);
  // El valor int es el tipo, puede ser char, long o lo que sea
  va_end(ap);
  return (sum);
}

int main(void) {
  printf("%d\n", add(3, 1, 2, 3));
  printf("%d\n", add(5, 1, 2, 3, 4, 5, 6));
  // Sólo sumará 5 argumentos de los 6, pues args es el limitador
  printf("%d\n", add(6, 1, 2, 3, 4, 5, 6));
  // Ahora si que sumará todos los argumentos
  printf("%d\n", add(7, 1, 2, 3, 4, 5, 6));
  // Al sumar mas valores de los que realmente tenemos, podemos obtener
  // cualquier resultado, pues atacamos a posiciones de memoria no
  // inicializadas
  return (0);
}
