#include <stdbool.h>
#include <stdio.h>

bool is_pangram(const char *str_in) {
  char control[26] = "00000000000000000000000000";
  int i = 0;

  while (str_in[i] != '\0') {
    if ((str_in[i] >= 65 && str_in[i] <= 90))
      control[str_in[i] - 65] = '1';
    if ((str_in[i] >= 97 && str_in[i] <= 122))
      control[str_in[i] - 97] = '1';
    i++;
  }
  i = 0;
  while (i < 26) {
    if (control[i] == '0')
      return (false);
    i++;
  }
  return (true);
}

int main(void) {
  printf("Result = %i\n",
         is_pangram("The quick, brown fox jumps over the lazy dog!"));
  printf("Result = %i\n", is_pangram("a"));
}
