#include <iostream>
#include <iomanip>

#define PI 3.1416 // Definimos una macro de forma global

// include y define no llevan ';' final

int y = 5; // Variable definida como global

int main (int argc, char *argv[])
{
  // Varias formas de inicializar variables
  int x = 10;
  int Suma;
  Suma = PI + x;

  std::cout << "La suma es" << Suma << std::endl;

  float suma2 =0;

  suma2 = PI + x;

  std::cout << "La suma es: " << suma2 << std::endl;
  std::cout << "La suma es: " << std::setprecision(2) << std::fixed << suma2 << std::endl;

  return 0;
}
