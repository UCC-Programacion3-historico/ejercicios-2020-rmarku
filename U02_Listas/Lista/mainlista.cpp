//
// Created by martin on 19/8/20.
//
//#include "List.h"
#include "List.h"
#include <iostream>
#include <string>
#include <time.h>

using namespace std;
class Auto {
private:
  string patente;
  string color;
  string marca;
  string modelo;

public:
  Auto(const string &patente, const string &color, const string &marca,
       const string &modelo)
      : patente(patente), color(color), marca(marca), modelo(modelo) {}

  Auto() {}
  Auto(const Auto &org) {
    patente = org.patente;
    color = org.color;
    marca = org.marca;
    modelo = org.modelo;
  }
  friend std::ostream &operator<<(std::ostream &os, const Auto &anAuto) {
    os << "patente: " << anAuto.patente << " color: " << anAuto.color
       << " marca: " << anAuto.marca << " modelo: " << anAuto.modelo << endl;
    return os;
  }
  bool operator==(const Auto &rhs) const { return patente == rhs.patente; }
  bool operator!=(const Auto &rhs) const { return !(rhs == *this); }
};

int main() {
  List<Auto> ListaDeAutos;
  time_t inicio, fin;

  ListaDeAutos.push_front({"ABC132", "rojo", "Fiat", "Punto"});
  ListaDeAutos.push_front({"ABC133", "azul", "Fiat", "Argo"});
  ListaDeAutos.push_front({"DWE843", "verde", "Alfa Romeo", "Juliet"});
  ListaDeAutos.push_front({"CDE138", "gris", "Renault", "Kwid"});
  ListaDeAutos.push_front({"JYU687", "negro", "Peugeot", "308"});
  ListaDeAutos.push_front({"ZXE837", "rojo", "BMW", "350"});
  ListaDeAutos.push_front({"EVE384", "amarillo", "Ferrari", "f500"});
  ListaDeAutos.push_front({"FUT200", "gris", "Delorean", "Delorean"});
  ListaDeAutos.push_front({"ABC132", "rojo", "Fiat", "Punto"});
  ListaDeAutos.push_front({"ABC133", "azul", "Fiat", "Argo"});
  ListaDeAutos.push_front({"DWE843", "verde", "Alfa Romeo", "Juliet"});
  ListaDeAutos.push_front({"CDE138", "gris", "Renault", "Kwid"});
  ListaDeAutos.push_front({"JYU687", "negro", "Peugeot", "308"});
  ListaDeAutos.push_front({"ZXE837", "rojo", "BMW", "350"});
  ListaDeAutos.push_front({"EVE384", "azul", "Ferrari", "f500"});
  ListaDeAutos.push_front({"FUT200", "gris", "Delorean", "Delorean"});

  List<Auto> ListaDeAutos2 = ListaDeAutos;

  int pp = 90;
  pp = pp++;

  inicio = clock();
  for (int i = 0; i < ListaDeAutos.getSize(); i++) {
    cout << ListaDeAutos[i];
  }
  fin = clock();
  cout << (fin - inicio) << endl;
  cout << "\n\n\n\n\n\n";

  inicio = clock();
  for (ListaDeAutos.start(); !ListaDeAutos.isEnd(); ++ListaDeAutos) {
    cout << ListaDeAutos.get();
  }
  fin = clock();
  cout << (fin - inicio) << endl;

  /**
   * O = (N*N+N)/2
   * O = N
   */
  return 0;
}
