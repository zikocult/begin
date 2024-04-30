#include <stdlib.h>
#include <stdio.h>

int count_space(const char *text)
{
  int i = 0;
  int count = 0;

  while (text[i] != '\0')
  {
    if ((text[i] >= 65 && text[i] <= 73)
		|| (text[i] >= 97 && text[i] <= 105))
      count = count + 2;
    if ((text[i] >= 74 && text[i] <= 90)
		|| (text[i] >= 106 && text[i] <= 122))
      count = count + 3;
    i++;
  }
  return (count - 1);
}

char *alphabet_position(const char *text)
{
  int i = 0;
  int j = 0;
  char *final_alph;

  final_alph = (char *)calloc(count_space(text) + 1, sizeof(char));
  if (!final_alph)
    return (0);
  while (text[i] != '\0' && j < count_space(text))
  {
    if ((text[i] >= 65 && text[i] <= 73))
    {
      final_alph[j] = ((int)text[i] - 64) + '0';
      if (text[i + 1] != '\0')
        j++;
    }
    if ((text[i] >= 97 && text[i] <= 105))
    {
      final_alph[j] = ((int)text[i] - 96) + '0';
      if (text[i + 1] != '\0')
        j++;
    }
    if ((text[i] >= 74 && text[i] <= 90))
    {
      final_alph[j] = ((int)text[i] - 64) / 10 + '0';
      j++;
      final_alph[j] = ((int)text[i] - 64) % 10 + '0';
      if (text[i + 1] != '\0')
        j++;
    }
    if ((text[i] >= 106 && text[i] <= 122))
    {
      final_alph[j] = ((int)text[i] - 96) / 10 + '0';
      j++;
      final_alph[j] = ((int)text[i] - 96) % 10 + '0';
      if (text[i + 1] != '\0')
        j++;
    }
    if (text[i + 1] == '\0')
      return (final_alph);
    else if (j < count_space(text))
    {
      final_alph[j] = ' ';
      j++;
    }
    i++;
  }
  return final_alph;
}

int main(void)
{
	char *temp;

	temp = alphabet_position("azkldfj");
	printf("%s\n", temp);
	temp = alphabet_position("12345");
	printf("%s\n", temp);
	temp = alphabet_position("abcdefghijklmNOPQRSTuvwxyz,");
	printf("%s\n", temp);
	free(temp);
	return(0);
}
