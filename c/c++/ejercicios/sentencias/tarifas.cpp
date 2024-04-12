/* Calcular la tarifa de saldo del teléfono
 * de 1000 a 1500 premium
 * de 500 a 999 intermedia
 * de 100 a 499 basica
 */

#include <iostream>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
  int pago;
  string prem, interm, basica;
  prem = "Premium";
  interm = "Intermedia";
  basica = "Basica";

  std::cout << "Cuanto está dispuesto a pagar?" << std::endl;
  std::cin >> pago;

  if (pago < 100) {
    std::cout << "No tenemos tarifas de tan poco dinero" << std::endl;
  } else if (pago >= 100 && pago < 500 ) {
    std::cout << "Tu tarifa sería la tarifa " << basica << std::endl;
  } else if (pago >= 500 && pago < 1000) {
    std::cout << "Tu tarifa sería la tarifa " << interm << std::endl;
  } else {
    std::cout << "Tu tarifa sería la tarifa " << prem << std::endl;
  }

  return 0;
}
