#include "../../U02_Listas/Lista/List.h"
#include "../../U03_Pilas/Pila/Stack.h"
#include <iostream>

using namespace std;
/*
 * Hacer un método que reciba una lista y una pila,
 * el método deberá modificar la lista original,
 * eliminando las posiciones indicadas por cada nodo
 * de la pila.
 * Lista -> 2 -> 4 -> 6 -> 8 -> 9 -> 3
 * Pila -> 2
 *         5
 * Lista nueva-> 2 -> 6 -> 8 -> 9
 */

template <class T>
void eliminar_desde_pila(Stack<unsigned int> &p, List<T> &l) {

  while (!p.isEmpty()) {
    unsigned int pos = p.pop();
    l.remove(pos - 1);
  }
}

int main() {
  List<int> miLista;
  Stack<unsigned int> miPila;

  for (int val : {3, 9, 8, 6, 4, 2}) {
    miLista.push_front(val);
  }
  for (int val : {5, 2}) {
    miPila.push(val);
  }

  miLista.print();
  eliminar_desde_pila(miPila, miLista);
  miLista.print();

  return 0;
}
