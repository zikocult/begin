#include <unistd.h>
#include <stdio.h>

char *ft_rev_print (char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    i++;
  i--;
  while (i >= 0)
    {
      write(1, &str[i], 1);
      i--;
    }
  write(1, "\n", 1);
  return (str);
}

int main (void)
{
  ft_rev_print("zaz");
  ft_rev_print("dub0 a POIL");
  ft_rev_print("Power of the pony");
  ft_rev_print("");
  ft_rev_print("What else?");
}
