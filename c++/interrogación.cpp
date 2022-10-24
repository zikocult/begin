#include <iostream>
// #include <iomanip>
// #include <cstring>
// #include <string>
// #include <cstdlib>
// #include <ios>
using namespace std;

int main (int argc, char *argv[])
{
  int numero;

  std::cout << "Escribe un número" << std::endl;
  std::cin >> numero;

  (numero%2==0) ? std::cout << "El número es par" << std::endl : std::cout << "El número es impar" << std::endl;

  return 0;

}
