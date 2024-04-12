#include <stdio.h>

int main(int argc, char *argv[]) {
  int arr1[4][5][2], var;
  int *point;
  var = 1;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      for (int k = 0; k < 2; k++) {
        arr1[i][j][k] = var;
        var += 2;
      }
    }
  }

  point = &arr1[0][0][0];

  int a = *(point + 4);
  int b = *(point + 16);
  int c = *(point + 23);

  printf("%d %d %d\n\n", a, b, c);

  for (int i = 0; i < 4; i++) {
    printf("    0   1 -> Plano%d\n", i);
    for (int j = 0; j < 5; j++) {
      printf(" %d ", j);
      for (int k = 0; k < 2; k++) {
        printf("[%d]", arr1[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}
