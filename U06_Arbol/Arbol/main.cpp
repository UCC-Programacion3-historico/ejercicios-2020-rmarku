#include "BinaryTree.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

unsigned int seed;

int main() {
  seed = time(nullptr);

  BinaryTree<int> miArbol;

  miArbol.put(5);
  miArbol.put(3);
  miArbol.put(1);
  miArbol.put(2);
  miArbol.put(7);
  miArbol.put(9);
  miArbol.put(8);
  miArbol.put(6);

  miArbol.print();
  miArbol.remove(7);
  miArbol.print();

  return 0;
  for (int i = 0; i < 100; ++i) {
    try {
      miArbol.put(rand_r(&seed) % 100);
    } catch (...) {
    }
  }
  for (int i = 0; i < 100; ++i) {
    try {
      int n = rand_r(&seed) % 100;
      miArbol.remove(n);
      cout << "Eliminé el " << n << endl;
    } catch (...) {
    }
  }

  miArbol.print();

  return 0;
}
