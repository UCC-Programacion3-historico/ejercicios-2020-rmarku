#include "BinaryTree.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(nullptr));

  BinaryTree<int> miArbol;

  miArbol.put(5);
  miArbol.put(3);
  miArbol.put(1);
  miArbol.put(2);
  miArbol.put(4);

  miArbol.put(7);
  miArbol.put(6);
  miArbol.put(9);
  miArbol.put(8);

  //    for (int i = 0; i < 100; ++i) {
  //    try {
  //      int n = rand() % 100;
  //      miArbol.remove(n);
  //      cout << "Eliminé el " << n << endl;
  //    } catch (...) {
  //    }
  //  }

  miArbol.print();
  miArbol.remove(2);
  miArbol.print();

  return 0;
}
