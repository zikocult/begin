// Simular una tienda con entradas y salidas de capital

#include "iostream"

using namespace std;

int main (int argc, char *argv[])
{
  int opcion;
  float agregar, retirar, saldo;
  saldo=3000;
  
  printf(" \n");
  printf(" \n");
  printf("\t*********************************************\n");
  printf("\t** Esto es un simulador de tienda o Cajero **\n");
  printf("\t*********************************************\n");
  printf(" \n");
  printf("Selecciona una acción\n");
  printf("\n1) Depositar dinero");
  printf("\n2) Retirar dinero");
  printf("\n3) Salir del cajero");
  printf(" \n");
  printf("\nOpcion seleccionada: ");
  cin >> opcion;

  switch (opcion) {
    case 1: cout << "Cuanto dinero quiere dipositar" << endl;
            cin >> agregar;
            saldo += agregar;
            cout << "Su saldo actual es de: " << saldo << endl;
            break;
    case 2: cout << "Cuanto dinero quiere retirar" << endl;
            cin >> retirar;
            if (retirar > saldo) {
              cout << "Tu saldo disponible es de: " << saldo << ", indique una cifra menor" << endl;
            } else {
              saldo -= retirar;
              cout << "Aquí está su dinero, su nuevo saldo disponible es de: " << saldo << endl;
            }
            break;
    case 3: cout << "Gracias por usar el cajero, hasta la próxima!" << endl;
            break;
    default:cout << "Esta opción no es válida" << endl;
      break;
  }
  return 0;
}
