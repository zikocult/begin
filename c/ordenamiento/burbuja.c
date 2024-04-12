#include <stdio.h>

int main(void) {
  int array[5] = {3, 2, 4, 1, 5};
  int aux;

  for (size_t i = 0; i < 5; i++)
    printf("%d\n", array[i]);

  for (size_t i = 0; i < 5; i++) {
    for (size_t j = 0; j < (5 - 1); j++) {
      if (array[j] > array[j + 1]) {
        aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
      }
    }
  }

  printf("\n*** ORDENADO ***\n\n");
  for (size_t i = 0; i < 5; i++)
    printf("%d\n", array[i]);

  return (0);
}
