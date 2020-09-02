#include "../Pila/Stack.h"
#include <iostream>
using namespace std;

int main() {
  Stack<char> miPila;
  string palabra;

  cout << "Ingrese una palabra ⌨️\n" << endl;
  cin >> palabra;

  for (int i = 0; i < palabra.length(); i++) {
    miPila.push(palabra[i]);
  }
  while (!miPila.isEmpty()) {
    cout << miPila.pop();
  }

  return 0;
}
