#include <stdio.h>
#include <stdlib.h>

int convert(int start, int end) {
  int n;

  n = end - start;
  if (n < 0)
    n *= -1;
  return n;
}

void rellenado(int start, int end, int *mal) {
  int i;

  i = 0;
  if (end > start) {
    while (start <= end) {
      mal[i] = start;
      i++;
      start++;
    }
  } else if (start > end) {
    while (start >= end) {
      mal[i] = start;
      start--;
      i++;
    }
  }
}
int *ft_range(int start, int end) {
  int n;
  int *mal;

  n = convert(end, start);
  mal = (int *)malloc((n + 1) * sizeof(int));
  if (!mal)
    return (0);
  rellenado(start, end, mal);
  for (int i; i <= n; i++)
    printf("%d\n", mal[i]);
  return (mal);
}

int main(void) {
  int *p; 
  p = (ft_range(-4, 12));
  free (p);
  return 0;
}
