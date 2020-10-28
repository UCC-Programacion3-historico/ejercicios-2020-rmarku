#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

  cout << "Cantidad argumentos " << argc << endl;

  for (int i = 0; i < argc; ++i) {
    cout << "Valor " << i << "\t" << argv[i] << endl;
  }

  if (argc >= 3) {
    // me pasaron arg suficientes
    if (string(argv[1]) == "-p_casos") {
      cout << "Hago analisis de casos";
      try {
        int cant = stoi(argv[2]);
        cout << "Tengo cantidad de casos " << cant;
      } catch (...) {
        cout << "Sin cantidad";
      }
    }
    if (string(argv[1]) == "-stad") {
      cout << "Muestro Estadistica";
    }
  }

  return 0;
}
