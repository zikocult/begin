// Pasar de número entero a número romano

#include "iostream"

using namespace std;

int main (int argc, char *argv[])
{
  int numero, millar, centenas, decenas, unidades;
  cout << "Introduce el número a convertir a romano, no puede ser superior a 3000" << endl; cin >> numero;

// Es va reduint el número poc a poc, s'agafa el residu i es va colocant a unitats, desenes, etc... deixant al final un /10 que redueix la expresió

  unidades = numero%10; numero = numero/10;
  decenas = numero%10; numero = numero/10;
  centenas = numero%10; numero = numero/10;
  millar = numero%10; numero = numero/10;

  if (millar <= 3) {
    switch (millar) {
      case 1: cout << "M"; break;
      case 2: cout << "MM"; break;
      case 3: cout << "MMM"; break;
    }

    switch (centenas) {
      case 1: cout << "C"; break;
      case 2: cout << "CC"; break;
      case 3: cout << "CCC"; break;
      case 4: cout << "CD"; break;
      case 5: cout << "D"; break;
      case 6: cout << "DC"; break;
      case 7: cout << "DCC"; break;
      case 8: cout << "DCCC"; break;
      case 9: cout << "CM"; break;
      // default: break;
    }

    switch (decenas) {
      case 1: cout << "X"; break;
      case 2: cout << "XX"; break;
      case 3: cout << "XXX"; break;
      case 4: cout << "XL"; break;
      case 5: cout << "L"; break;
      case 6: cout << "LX"; break;
      case 7: cout << "LXX"; break;
      case 8: cout << "LXXX"; break;
      case 9: cout << "XC"; break;
      // default: break;
    } 

    switch (unidades) {
      case 1: cout << "I"; break;
      case 2: cout << "II"; break;
      case 3: cout << "III"; break;
      case 4: cout << "IV"; break;
      case 5: cout << "V"; break;
      case 6: cout << "VI"; break;
      case 7: cout << "VII"; break;
      case 8: cout << "VIII"; break;
      case 9: cout << "IX"; break;
    // default: break;
    }
    cout << " " << endl;
 } else {
    cout << "Te excediste" << endl;
 }

  return 0;
}

