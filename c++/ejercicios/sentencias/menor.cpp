// Calcular el número menor entre dos dados
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  float num1, num2;
  cout << "introduzca un par de números" << endl;
  cin >> num1 >> num2;

  if (num1 > num2) {
    std::cout << "El número menor es " << num2 << std::endl;
  } else {
    std::cout << "El número menos es " << num1 << std::endl;
  }

  return 0;
}
