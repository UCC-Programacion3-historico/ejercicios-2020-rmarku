#include "HashMapTree.h"
#include <iostream>
#include <string>

using namespace std;

class Car {
public:
  string modelo;
  string patente;
  string color;
  int km;
};

unsigned int miHF(string c) {
  unsigned int pos = 0;
  for (int i = 0; i < c.length(); ++i) {
    pos += c[i];
  }
  return pos;
}

int main() {
  HashMapTree<string, Car> miTablaHash(7, miHF);
  Car auto1 = {"Punto", "ADF123", "Rojo", 150000};
  Car auto2 = {"206", "EWQ321", "Verde", 100000};
  Car auto3 = {"Strada", "LKJ752", "Azul", 400000};
  Car auto4 = {"VMW", "LJK752", "Plateado", 0};

  try {
    miTablaHash.put(auto1.patente, auto1);
    miTablaHash.put(auto2.patente, auto2);
    miTablaHash.put(auto3.patente, auto3);
    miTablaHash.put(auto4.patente, auto4);
  } catch (...) {
    cout << "Colisiono" << endl;
  }

  cout << miTablaHash.get(auto3.patente).modelo << endl;
  cout << miTablaHash.get(auto4.patente).modelo << endl;

  return 0;
}
