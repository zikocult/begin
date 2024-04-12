#include <stdio.h>

int main(void) {
  int array[5] = {3, 4, 1, 5, 2};
  int aux, min;

  for (size_t i = 0; i < 5; i++) {
    min = i;
    for (size_t j = i + 1; j < 5; j++) {
      if (array[j] < array[min]) {
        min = j;
      }
    }
    aux = array[i];
    array[i] = array[min];
    array[min] = aux;
  }

  for (size_t i = 0; i < 5; i++)
    printf("%d\n", array[i]);
  return (0);
}
