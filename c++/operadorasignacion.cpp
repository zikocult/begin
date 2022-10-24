#include <iostream>

int main (int argc, char *argv[])
{
  int a, b, c;
  a=b=c=10;

  a = a + 3;
  b += 4;

  c = c -4;
  c -= 2;

  a = a * 2;
  b *= 2;

  c = c/ 2;
  c /= 2;

  std::cout << "Los valores son " << a << " " << b  << " " << c  << " " << std::endl; 

  return 0;
}
