#include <iostream>
// #include <iomanip>
// #include <cstring>
// #include <string>
// #include <cstdlib>
// #include <ios>

using namespace std;

int main (int argc, char *argv[])
{
  float a, b;
  std::cout << "Introduzca dos números a analizar si su suma es mayor, menor o igual a 5" << std::endl;
  std::cin >> a >> b;

  if (a+b==5) {
    std::cout << "Por el culo te la hinco" << std::endl;
  } else if (a+b<5) {
    std::cout << "El resultado es menor que 5" << std::endl;
  } else {
    std::cout << "El resultado es mayor que 5" << std::endl;
  }

  return 0;
}
