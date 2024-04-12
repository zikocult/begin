#include <iostream>
// #include <iomanip>
// #include <cstring>
// #include <string>
// #include <cstdlib>
// #include <ios>

using namespace std;

int main (int argc, char *argv[])
{
  
// Primero incrementará el valor de A y luego asignara A a B

  int A = 0;
  int B = ++A;
  
  std::cout << "El valor de A = " << A << ", el valor de B = " << B << std::endl;

  // Primero asignara el valor de C a D y después sumará en C 

  int C = 0;
  int D = C++;
  
  std::cout << "El valor de C = " << C << ", el valor de D = " << D << std::endl;

  return 0;
}
