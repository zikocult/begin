#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *string) {
  int count;

  count = 0;
  while (string[count])
    count++;
  return (count);
}

void ft_initialize(char *result, const char *string) {
  int i = 0;

  i = 0;
  while (string[i] != '\0') {
    result[i] = '(';
    i++;
  }
}

void ft_fill(char *result, const char *string, int i, int j) {
  char temp[2];

  temp[0] = string[i];
  temp[1] = string[j];
  if (temp[0] >= 65 && temp[0] <= 90)
    temp[0] = temp[0] + 32;
  if (temp[1] >= 65 && temp[1] <= 90)
    temp[1] = temp[1] + 32;
  if (temp[0] == temp[1]) {
    result[i] = ')';
    result[j] = ')';
  }
}

char *DuplicateEncoder(const char *string) {
  int i = 0;
  int j;
  char *result;

  result = (char *)calloc((ft_strlen(string) + 1), sizeof(char));
  if (!result)
    return (0);
  ft_initialize(result, string);
  while (string[i] != '\0') {
    j = i + 1;
    while (string[j] != '\0') {
      ft_fill(result, string, i, j);
      j++;
    }
    i++;
  }
  return result;
}

int main(void) {
  char *temp;

  temp = DuplicateEncoder("patata");
  printf("%s\n", temp);
  temp = DuplicateEncoder("mescolanza");
  printf("%s\n", temp);
  temp = DuplicateEncoder("capital central");
  printf("%s\n", temp);
  free(temp);
  return (0);
}
