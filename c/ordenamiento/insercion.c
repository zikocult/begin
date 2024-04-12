#include <stdio.h>

int main(void) {
  int array[5] = {3, 1, 4, 2, 5};
  int pos, aux;

  for (size_t i = 0; i < 5; i++) {
    pos = i;
    aux = array[i];
    while ((pos > 0) && (aux < array[pos - 1])) {
      array[pos] = array[pos - 1];
      pos--;
    }
    array[pos] = aux;
  }

  for (size_t i = 0; i < 5; i++)
    printf("%i\n", array[i]);

  return (0);
}
