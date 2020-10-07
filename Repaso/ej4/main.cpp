#include "../../U02_Listas/Lista/List.h"
#include <iostream>

using namespace std;
/*
 * Escribir un método que busque en una lista enlazada el valor y lo mueva
 * a la primeraposición
 */

template <class T> class ListNueva : public List<T> {

public:
  void moverPrimero(T val) {
    T encontrado = this->find(val);
    this->insert(0, encontrado);
    this->remove(encontrado.pos);
  }
};

int main() {
  cout << "Hola mundo" << endl;

  return 0;
}
